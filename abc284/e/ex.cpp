#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> to(n);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  const int MX = 1e6;
  int ans = 0;
  vector<bool> used(n);
  auto dfs = [&](auto dfs, int v) -> void {
    if (ans == MX) return;
    ans++;
    used[v] = true;
    for (int u : to[v]) {
      if (used[u]) continue;
      dfs(dfs,u);
    }
    used[v] = false;
  };

  dfs(dfs,0);
  cout << ans << endl;
  return 0;
}