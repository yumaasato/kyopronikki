#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
typedef long long ll;
const ll inf = 1e18;

int main() {
  int n,k; cin >> n >> k;
  vector<int> a(k);
  rep(i,k)  {
    cin >> a[i];
    a[i]--;
  }

  vector<ll> x(n);
  vector<ll> y(n);

  rep(i,n) cin >> x[i] >> y[i];

  ll ans = 0;
  rep(i,n) {
    ll dist = inf;
    rep(j,k) {
      dist = min(dist, (x[i]-x[a[j]])*(x[i]-x[a[j]]) + (y[i]-y[a[j]])*(y[i]-y[a[j]]));
    }
    ans = max(ans,dist);
  }

  printf("%.10lf\n", sqrt((double)ans));
  return 0;
}