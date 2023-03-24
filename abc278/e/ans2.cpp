#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int H, W, n, h, w;
  cin >> H >> W >> n >> h >> w;
  vector a(H, vector<int>(W));
  rep(i,H)rep(j,W) cin >> a[i][j];

  vector ans(H-h+1, vector<int>(W-w+1));
  rep(si,H-h+1) { // 縦方向に操作する
    vector<int> cnt(n+1); int now = 0;

    auto add = [&](int i, int j, int val=1) {
      int x = a[i][j];
      if (cnt[x] == 0) now++;
      cnt[x] += val;
      if (cnt[x] == 0) now--;
    };

    auto del = [&](int i, int j) { add(i,j,-1);};

    rep(i,H)rep(j,W) add(i,j); // 全部追加
    rep(i,h)rep(j,w-1) del(si+i,j); // 縦に塗りつぶす

    rep(j,W-w+1) { // 横方向に操作する
    // x方向にh個塗りつぶす
      rep(i,h) del(si+i,w-1+j); // 右部分を塗りつぶす
      ans[si][j] = now;
      rep(i,h) add(si+i,j); // 左部分を追加する
    }
  }

  rep(i,ans.size()) {
    rep(j,ans[i].size()) {
      if(j >= 1) cout << " ";
      cout << ans[i][j];
    }
    cout << '\n';
  }
  return 0;
}