#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
using namespace std;

int main() {
  ll n; cin >> n;
  vector<ll> b(3);
  rep(i,0,3) cin >> b[i];
  vector<ll> a(n);

  rep(i,0,n) cin >> a[i];

  vector<ll> s(n+1);
  s[0] = 0;
  rep(i,0,n) s[i+1] = s[i] + a[i];
  set<ll> st;
  rep(i,0,n+1) st.insert(s[i]);

  rep(i,0,n+1) {
    ll ns = s[i];
    rep(j,0,3) {
      ns += b[j]; // P,Q,R :累積和
      if(!st.count(ns)) break;
      if(j==2) {
        cout << "Yes" << endl;
        exit(0);
      }
    }
  }
  cout << "No" << endl;
}