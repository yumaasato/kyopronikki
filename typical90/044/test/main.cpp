#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,q; cin >> n >> q;
  int a[200010];
  rep(i,0,n) cin >> a[i];

  int shift = 0;
  rep(i,0,q) {
      int t,x,y;
      cin >> t >> x >> y;
      if(t == 1) {
        x--; y--;
        swap(a[(x+shift)%n],a[(y+shift)%n]);
      }
      if(t == 2) shift = (shift+n-1)%n;
      if(t == 3)  {
        x--;
        cout << a[(x+shift)%n] << endl;
      }
  }
  return 0;
}