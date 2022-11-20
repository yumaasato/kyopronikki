#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define reps(i,s,n) for(int i=s;i<n;++i)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main() {
    int n, m; cin >> n >> m;
    queue<P> q;
    q.emplace(0, 0);
    const int INF = 1e9;
    vector ans(n, vector<int>(n, INF));
    ans[0][0] = 0;
    vector<P> g;
    //対象となる場所を求める
    rep(i, n)rep(j, n) {
        if (i * i + j * j == m) {
            g.emplace_back(i, j);
            g.emplace_back(i, -j);
            g.emplace_back(-i, j);
            g.emplace_back(-i, -j);
        }
    }

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (const auto& [xi,yi] : g) {
            int nx = x + xi;
            int ny = y + yi;
            if (nx < 0 || n <= nx) continue;
            if (ny < 0 || n <= ny) continue;
            if (ans[nx][ny] != INF) continue;
            ans[nx][ny] = min(ans[nx][ny], ans[x][y] + 1);
            q.emplace(nx, ny);
        }
    }
    rep(i, n)rep(j, n) if (ans[i][j] == INF) ans[i][j] = -1;
    rep(i, n) {
        rep(j, n) cout <<  ans[i][j] << ' ';
        cout << endl;
    }
    return 0;
}