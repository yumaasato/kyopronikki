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
  if((z > 0 && x > 0 && y > 0) || (z < 0 && x < 0 && y < 0)) {
    if(abs(z) > abs(y) && abs(x) > abs(y)) {
      cout << -1 << endl;
      exit(0);
    }
  }
  if(x*y < 0 || abs(x) < abs(y)) {
    cout << abs(x) << endl;
    exit(0);
  }
  ans = abs(z) + abs(x-z);
  cout << ans << endl;
}