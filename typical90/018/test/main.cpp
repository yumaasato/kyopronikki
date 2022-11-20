#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
long double PI = 3.14159265358979;
const ll INF = 1000000000000000000LL;
long double t,l,x,y,dx,dy,dz;

long double ans(long double e) {
  long double d1, radian;
  dx = 0;
  dy = -(l/2.0)*sin(e/t*2.0*PI);
  dz = (l/2.0) - (l/2.0)*cos(e/t*2.0*PI);
  d1 = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
  radian = atan2(dz,d1);
  return radian * 180.0L / PI;
};

int main() {
  int q; cin >> t;
  cin >> l >> x >> y;
  cin >> q;

  rep(i,0,q) {
    double e; cin >> e;
    printf("%.12Lf\n",ans(e));
  }
  return 0;
}