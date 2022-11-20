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
const int m = 10000;

int main() {
  int n,x,y; cin >> n >> x >> y;
  vector<int> a(n+1);
  rrep(i,1,n) {
    cin >> a[i];
  }

  int cx[2*m+1], cy[2*m+1], cz[2*m+1];
  int *dx = cx + m, *dy = cy + m, *dz = cz + m;
  dx[a[1]] = dy[0] = true;

  rrep(i,2,n) {
    rrep(j,-m,m) dz[j] = 0;
    int dist = a[i];

    if(i % 2 != 0) {
      for(int j = -m; j <= m-dist; j++) {
        dz[j+dist] |= dx[j],dz[j] |= dx[j+dist];
      }
    swap(dx,dz);
    } else {
      for(int j = -m; j <= m-dist; j++) {
        dz[j+dist] |= dy[j],dz[j] |= dy[j+dist];
      }
    swap(dy,dz);
    }
  }

  cout << (dx[x] and dy[y] ? "Yes" : "No") << endl;
  return 0;
}