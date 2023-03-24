#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

double p;

double f(double x) {
  return (double) x + p / (double)pow(2,x/1.5);
}

int main() {
  cin >> p;
  double l = 0, r = 1e18;
  while(r - l > 1e-9) {
    double n1 = (2*l + r) / 3;
    double n2 = (l + 2*r) / 3;
    if(f(n1) > f(n2)) l = n1;
    else r = n2;
  }
  double ans = f(l);
  printf("%.10lf\n", ans);
  return 0;
}