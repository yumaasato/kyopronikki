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
using P = pair<int, int>;

int main() {
  int h,w; cin >> h >> w;
  vector<vector<int> > a(h+1, vector<int>(w+1));

  rrep(i,1,h)rrep(j,1,w) {
    cin >> a[i][j];
  }
  rrep(a1,1,h)rrep(a2,a1+1,h) {
    rrep(b1,1,w)rrep(b2,b1+1,w) {
      int x = a[a1][b1] + a[a2][b2];
      int y = a[a2][b1] + a[a1][b2];
      if(x > y) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}