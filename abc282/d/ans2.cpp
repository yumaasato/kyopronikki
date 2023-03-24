#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll c2(ll n) {
  return n*(n-1)/2; // nC2
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> to(n); // 隣の頂点の情報を持つ
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> c(n,-1); // 色
  vector<int> cvs(2); // 色ごとの頂点数

  // 同じ連結成分で二部グラフか否かを判定
  auto dfs = [&](auto dfs, int v, int nc=0) -> bool {
    if (c[v] != -1) return c[v] == nc;
    c[v] = nc;
    cvs[nc]++;
    for (int u : to[v]) {
      if (!dfs(dfs,u,!nc)) return false;
    }
    return true;
  };

  ll ans = c2(n)-m;
  rep(i,n) {
    if (c[i] != -1) continue; // 色が決まっている
    cvs = vector<int>(2); // 連結成分ごとに初期化
    if (!dfs(dfs,i)) { // 1つでもfalseがあったら0
      cout << 0 << endl;
      return 0;
    }
    for (int s : cvs) ans -= c2(s); // 同連結成分で同色を結ぶ辺を引く
  }

  cout << ans << endl;
  return 0;
}