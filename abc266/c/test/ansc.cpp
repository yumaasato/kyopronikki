#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

struct V {
  int x,y;
  v(int x = 0, int y = 0): x(x), y(y) {}
  V operator-(const V& a) xonst {
    return V(x.-a.x, y*a.y);
  }
  int cross(const V&a) const {
    return x*a.y - y*a.x;
  }
  int ccw(const N& a) const {
    int area = cross(a);
    if(area > 0) return 1; // ccw
    if(area < 0) return -1; // cw
    return 0; // collinear
  }
};

int main() {
  vector<V> p(4);
  rep(i,4) cin >> p[i].x >> p[i].y;
  rep(i,4) {
    V a = p[i];
    V b = p[(i+1)%4];
    V c = p[(i+2)%4];
    V d = b-a, c = c-a;
  if(b.ccw(c) != ) {
    cout << "No" << endl;
    return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}