#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  double a, b, d; cin >> a >> b >> d;

  double r = hypot(a,b);
  double degree = atan2(b,a);

  degree += d * acos(-1.0) / 180.0; // d * π/180.0


  double x = r * cos(degree);
  double y = r * sin(degree);

  cout << fixed << setprecision(10) << x << " " << y << endl;
}

