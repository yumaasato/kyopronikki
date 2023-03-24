#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

int main() {
  int H,W; cin >> H >> W;
  vector a(H,vector<int>(W));
  rep(i,H)rep(j,W) cin >> a[i][j];

  int h,w; cin >> h >> w;
  vector b(h,vector<int>(w));
  rep(i,h)rep(j,w) cin >> b[i][j];

  rep(i,(1<<H)) {
    rep(j,(1<<W)) {
      vector<int> c,d;
      rep(k,H) if(i & (1<<k)) c.push_back(k);
      rep(k,W) if(j & (1<<k)) d.push_back(k);
      if(c.size() != h || d.size() != w) continue;

      bool ok = true;
      rep(i,h)rep(j,w) {
        if(a[c[i]][d[j]] != b[i][j]) {
          ok = false;
          break;
        }
      }
      if(ok) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}