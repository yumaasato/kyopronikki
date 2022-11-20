#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll infl = 1LL << 60;

int main() {
  int n,m; cin >> n >> m;
  vector<ll> a(n);
  rep(i,0,n) cin >> a[i];
  ll s = 0, t = 0;
  rep(i,0,m) s += (ll)a[i]*(i+1);
  rep(i,0,m) t += a[i];

  ll ans = s;
  rep(i,0,n-m) {
    ll ns = s - t + a[i+m]*m;
    ll nt = t - a[i] + a[i+m]; 
    s = ns; t = nt;
    ans = max(ans,s);
  }

  cout << ans << endl;
}