#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

double getAngle(double xa, double ya, double xb, double yb, double xc, double yc) {
    double VectorAB = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    double VectorAC = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));
    double Naiseki = (xb - xa) * (xc - xa) + (yb - ya) * (yc - ya);
    double cosTheta = Naiseki / (VectorAB * VectorAC);
    return acos(cosTheta) * 180.0 / acos(-1.0);
}

int main() {
  double ax,ay,bx,by,cx,cy,dx,dy;
  cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

  double t1 = getAngle(ax,ay,bx,by,dx,dy);
  double t2 = getAngle(bx,by,ax,ay,cx,cy);
  double t3 = getAngle(cx,cy,bx,by,dx,dy);
  double t4 = getAngle(dx,dy,ax,ay,cx,cy);

  if((t1 < 180 && t2 < 180 && t3 < 180 && t4 < 180) && (t1 + t2 + t3 + t4 == 360)) cout << "Yes" << endl;
  else cout << "No" << endl;
}