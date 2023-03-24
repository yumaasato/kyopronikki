#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

struct Edge {
  int to, cost;
};

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  int n2 = n*2;
  vector<vector<Edge>> g(n2);
  rep(i,m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a; --b;
    if (c == 1) {
      g[a].push_back((Edge){b,1});
      g[b].push_back((Edge){a,1});
    } else {
      g[n+a].push_back((Edge){n+b,1});
      g[n+b].push_back((Edge){n+a,1});
    }
  }
  rep(i,k) {
    int v;
    cin >> v;
    --v;
    g[v].push_back((Edge){n+v,0});
    g[n+v].push_back((Edge){v,0});
  }

  const int INF = 1001001001;
  vector<int> dist(n2, INF);
  deque<P> q;
  dist[0] = 0; q.emplace_back(0,0);
  while (q.size()) {
    auto [d,v] = q.front(); q.pop_front();
    if (dist[v] != d) continue;
    for (Edge e : g[v]) {
      int nd = d+e.cost;
      if (nd >= dist[e.to]) continue;
      dist[e.to] = nd;
      if (e.cost) q.emplace_back(nd,e.to);
      else q.emplace_front(nd,e.to);
    }
  }
  int ans = min(dist[n-1], dist[n2-1]);
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}