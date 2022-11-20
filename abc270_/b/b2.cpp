// yを正に固定
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int x,y,z; cin >> x >> y >> z;
  int ans = 0;
  if(y < 0) {
    x *= -1;  y *= -1;  z *= -1;
  }
  if(x < y) {
    cout << abs(x) << endl;
  } else {
    if(z < y) cout << abs(z) + abs(z-x) << endl;
    else cout << -1 << endl;
  }
}