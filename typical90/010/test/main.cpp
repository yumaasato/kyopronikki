#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<int> c(n+1);
  vector<int> p(n+1);

  rep(i,n) cin >> c[i] >> p[i];

  vector<ll> s1(n+1);
  vector<ll> s2(n+1);

  rep(i,n) {
    if(c[i] == 1) {
      s1[i+1] = s1[i] + p[i];
      s2[i+1] = s2[i];
    }
    else {
      s2[i+1] = s2[i] + p[i];
      s1[i+1] = s1[i];
    }
  }

  int q; cin >> q;
  rep(i,q) {
    int l,r; cin >> l >> r;
    ll ans1 = s1[r] - s1[l-1];
    ll ans2 = s2[r] - s2[l-1];
    cout << ans1 << " " << ans2 << endl;
  }
}