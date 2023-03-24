#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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
  int H, W; cin >> H >> W;
  vector<string> c(H);
  rep(i,H) cin >> c[i];
  dsu uf(H*W);
  auto id = [&](int i, int j) {
    return i*W+j;
  };

  rep(i,H) rep(j,W) {
      if(c[i][j] != '.') continue;
      if(i+1 < H && c[i+1][j] == '.') {
        uf.merge(id(i,j), id(i+1,j));
      }
      if(j+1 < W && c[i][j+1] == '.') {
        uf.merge(id(i,j), id(i,j+1));
      }
    }

  const int dy[4] = {1,0,-1,0};
  const int dx[4] = {0,1,0,-1};
  rep(i,H)rep(j,W) if(c[i][j] == 'S'){
    set<int> st; int sum = 0;
    rep(k,4) {
      int nx = dx[k] + i, ny = dy[k] + j;
      if(nx < 0 || nx >= H) continue;
      if(ny < 0 || ny >= W) continue;
      if(c[nx][ny] == '#') continue;
      st.insert(uf.leader(id(nx,ny)));
      sum++;
    }
    if(st.size() == sum) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}