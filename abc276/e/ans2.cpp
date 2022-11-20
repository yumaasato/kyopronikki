#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];

  int n = h*w;
  dsu uf(n);
  auto toID = [&](int i, int j) { return i*w+j;};
  rep(i,h)rep(j,w) {
    if (s[i][j] != '.') continue;
    if (j+1 < w && s[i][j+1] == '.') {
      uf.merge(toID(i,j), toID(i,j+1));
    }
    if (i+1 < h && s[i+1][j] == '.') {
      uf.merge(toID(i,j), toID(i+1,j));
    }
  }

  rep(i,h)rep(j,w) if (s[i][j] == 'S') {
    set<int> st; int cnt = 0;
    rep(v,4) {
      int ni = i+di[v], nj = j+dj[v];
      if (ni < 0 || ni >= h) continue;
      if (nj < 0 || nj >= w) continue;
      if (s[ni][nj] != '.') continue;
      st.insert(uf.leader(toID(ni,nj)));
      cnt++;
    }
    if (st.size() == cnt) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}