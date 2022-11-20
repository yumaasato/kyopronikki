#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  ll n,q; cin >> n >> q;
  vector<ll> a(n);
  vector<ll> s(n+1);
  rep(i,n) cin >> a[i];
  sort(all(a));
  rrep(i,1,n) {
    s[i] = s[i-1] + a[i-1];
  }

  rep(i,q) {
    ll x; cin >> x;
    ll lx = lower_bound(a.begin(),a.end(), x) - a.begin();
    ll ans = abs(lx*x - s[lx]);
    ans += (s[n]-s[lx]) -(n-lx)*x;
    cout << ans << '\n';
  }
  return 0;
}