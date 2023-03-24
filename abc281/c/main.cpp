#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
typedef long long ll;

int main() {
  ll n,t; cin >> n >> t;
  vector<ll> a(n), s(n+1);

  rep(i,n) cin >> a[i];

  rep(i,n) {
    if(s[i] + a[i] >= t) {
      cout << i + 1 << " " << t - s[i] << endl;
      return 0;
    }
    s[i+1] = s[i] + a[i];
  }

    ll num = t % s[n];
    rep(i,n) {
      if(num - a[i] <= 0) {
        cout << i+1 << " " << num << endl;
        return 0;
      }
      num -= a[i];
    }

  return 0;
}