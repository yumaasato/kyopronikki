#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int flag(double ax, double ay, double bx, double by, double cx, double cy) {
  int gaiseki = (bx - ax)*(cy - ay) - (cx - ax)*(by - ay);
  if(gaiseki > 0) return 1;
  else return 0;
}

int main() {
  double ax,ay,bx,by,cx,cy,dx,dy;
  cin >> ax >> ay; cin >> bx >> by;
  cin >> cx >> cy; cin >> dx >> dy;
  int n1 = flag(ax,ay,bx,by,dx,dy);
  int n2 = flag(bx,by,cx,cy,ax,ay);
  int n3 = flag(cx,cy,dx,dy,bx,by);
  int n4 = flag(dx,dy,cx,cy,ax,ay);

  if(n1&&n2&&n3&&n4) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}