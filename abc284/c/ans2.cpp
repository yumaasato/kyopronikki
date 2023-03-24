// BFSでの実装
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define fore(i,a) for(auto &i:a)

int main() {
  int n,m; cin >> n >> m;
  vector<vector<int>> to(n);
  rep(i,m) {
    int a,b; cin >> a >> b;
    --a; --b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<bool> visited(n);
  auto bfs = [&] (int sv) -> void {
    queue<int> q;
    visited[sv] = true; q.push(sv);
    while(!q.empty()) {
      int v = q.front(); q.pop();
      fore(u,to[v]) {
        if(visited[u]) continue;
        visited[u] = true;
        q.push(u);
      }
    }
  };

  int ans = 0;
  rep(v,n) {
    if(visited[v]) continue;
    bfs(v);
    ans++;
  }
  cout << ans << endl;
  return 0;
}