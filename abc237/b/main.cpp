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

int main() {
  int h,w; cin >> h >> w;
  vector<vector<int>> a(h+1, vector<int>(w+1));
  rrep(i,1,h)rrep(j,1,w) cin >> a[i][j];

  rrep(i,1,w) {
    rrep(j,1,h) {
      cout << a[j][i] << ' ';
    }
    cout << endl;
  }
  return 0;
}