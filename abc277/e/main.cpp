#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const int inf = 1e9;
typedef pair<int, int> edge;
int n,m,k;
vector<int> dist(400009, inf);
vector<edge> g[400009];

int main() {
  cin >> n >> m >> k;

  int u,v,a;
  rep(i,m) {
    cin >> u >> v >> a;
    if(a) {
      g[u].push_back(edge(v,1));
      g[v].push_back(edge(u,1));
    }
    else {
      g[n+u].push_back(edge(n+v,1));
      g[n+v].push_back(edge(n+u,1));
    }
  }
  int s;
  rep(i,k) {
    cin >> s;
    g[s].push_back(edge(n+s,0));
    g[n+s].push_back(edge(s,0));
  }

  deque<int> dq;
  dq.push_back(1);
  dist[1] = 0;

  while(dq.size()) {
    int v = dq.front();
    dq.pop_front();
    rep(i,(int)g[v].size()) {
      int u = g[v][i].first, c = g[v][i].second;
      if(dist[u] > dist[v] + c) {
        dist[u] = dist[v] + c;
        if(c == 0) dq.push_front(u);
        else dq.push_back(u);
      }
    }
  }
  int ans = min(dist[n],dist[2*n]);
  if(ans == inf) ans = -1;
  cout << ans << endl;
  return 0;
}