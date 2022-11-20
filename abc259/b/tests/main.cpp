#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
#define M_PI 3.14159265358979323846264338327950288
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  double a,b,d; cin >> a >> b >> d;

  double radian = d*M_PI/180.0;

  double x = a*cos(radian) - b*sin(radian);
  double y = a*sin(radian) + b*cos(radian);

  printf("%.10f %.10f\n",x,y);
  return 0;
}