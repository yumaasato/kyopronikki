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
  int n; cin >> n;
  vector<double> x(n);
  vector<double> y(n);

  rep(i,n) {
    cin >> x[i] >> y[i];
  }

  double ans = 0;
  rrep(i,0,n-1)rrep(j,i+1,n-1) {
    double dist = (x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(y[j] - y[i]);
    ans = max(ans,dist);
  }

  printf("%.10f\n", sqrt(ans));
  return 0;
}