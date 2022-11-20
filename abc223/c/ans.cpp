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
  vector<double> a(n), b(n);
  rep(i,n) {
    cin >> a[i] >> b[i];
  }
  int li = 0, ri = n-1;
  double lx = 0, rx = 0;
  double ans = 0;
  while(li < ri) {
    double lt = (a[li]-lx)/b[li];
    double rt = (a[ri]-rx)/b[ri];
    if(lt < rt) {
      ans += a[li]*lt;
      lx = 0; rx += b[ri]*lt;
      li++;
    } else {
      ans += b[li]*rt;
      rx = 0; lx += b[li]*rt;
      ri--;
    }
  }
  ans += (a[li]-lx-rx)/2;
  printf("%.10f\n", ans);
  return 0;
}