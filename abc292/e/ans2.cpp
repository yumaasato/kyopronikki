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
  }

  int ans = 0;
  rep(sv,n) {
    vector<bool> can(n);
    queue<int> q;
    q.push(sv); can[sv] = true;
    while (q.size()) {
      int v = q.front(); q.pop();
      for (int u : to[v]) {
        if (can[u]) continue;
        can[u] = true;
        q.push(u);
        ans++;
      }
    }
  }

  ans -= m;
  cout << ans << endl;
  return 0;
}