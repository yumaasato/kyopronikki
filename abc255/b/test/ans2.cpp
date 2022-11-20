#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> a(k);
  rep(i,k) {
    cin >> a[i];
    a[i]--;
  }

  vector<int> x(n);
  vector<int> y(n);

  rep(i,n) cin >> x[i] >> y[i];

  vector<double> r(n);
  rep(i,n) {
    r[i] = 1e18; // 10^18
    rep(j,k) {
      double dx = x[i]-x[a[i]];
      double dy = y[j]-y[a[j]];
      double dist = sqrt(dx*dx + dy*dy); // 2点間の距離
      r[i] = min(r[i], dist);
    }
  }
  double ans = 0;
  rep(i,n) ans = max(ans, r[i]);
  printf("%.10f\n",ans);
}