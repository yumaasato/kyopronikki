// 二次元累積和
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int main() {
    int H, W, n, h, w;
    cin >> H >> W >> n >> h >> w;
    vector a(H, vector<int>(W));
    rep(i,H)rep(j,W) cin >> a[i][j];

    vector<vector<P>> ps(n+1);
    rep(i,H)rep(j,W) ps[a[i][j]].emplace_back(i,j);

    int ah = H-h+1, aw = W-w+1;
    vector ans(ah+1, vector<int>(aw+1));
    for (int x = 1; x <= n; x++) {
    int li = 0, ri = ah;
    int lj = 0, rj = aw;
    for (auto [i,j] : ps[x]) {
        li = max(li, i-h+1); ri = min(ri, i+1);
        lj = max(lj, j-w+1); rj = min(rj, j+1);
    }
    if (li >= ri || lj >= rj) continue;
    ans[li][lj]--; ans[li][rj]++;
    ans[ri][lj]++; ans[ri][rj]--;
    }
    rep(i,ah)rep(j,aw) ans[i][j+1] += ans[i][j];
    rep(i,ah)rep(j,aw) ans[i+1][j] += ans[i][j];

    rep(i,ah) {
        rep(j,aw) cout << n+ans[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}