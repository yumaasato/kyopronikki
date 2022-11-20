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
using P = pair<ll, ll>;

int main() {
  ll n,w; cin >> n >> w;
  vector<P> a(n);

  rep(i,n) {
    cin >> a[i].first >> a[i].second;
  }

  sort(a.rbegin(),a.rend());

  ll ans = 0;
  rep(i,n) {
    ll g = min(a[i].second, w);
    ans += g*a[i].first;
    w -= g;
    if(w == 0) break;
  }
  cout << ans << endl;
  return 0;
}