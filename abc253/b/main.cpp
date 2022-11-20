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
  int h,w; cin >> h >>w;
  char s[h][w];
  rep(i,0,h)rep(j,0,w) {
    cin >> s[i][j];
  }

  int nx,ny,wx,wy;
  int cnt = 0;
  rep(i,0,h)rep(j,0,w) {
    if(s[i][j] == 'o'){
      if(cnt == 0) {
      nx = i; ny = j;
      cnt++;
      }
      else {
        wx = i; wy = j;
      }
    }
  }
  cout << abs(nx-wx) + abs(ny-wy) << endl;
  return 0;
}