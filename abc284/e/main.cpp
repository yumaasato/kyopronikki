#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
void chmax(ll & x, ll y) { x = max(x,y);}
void chmin(ll & x, ll y) { x = min(x,y);}
using P = pair<int, int>;

int cnt = 0;
const int V = 200090;
int n,m;
vector<int> g[V];
vector<bool> visited(V);

void dfs(int pos) {
  if(cnt == 1e6) return;
  cnt++;
  visited[pos] = true;
  for(auto ex : g[pos]) {
    if(visited[ex]) continue;
    dfs(ex);
  }
  visited[pos] = false;
  return;
}

int main() {
  cin >> n >> m;
  rep(i,m) {
    int u,v; cin >> u >> v;
    u--; v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(0);
  cout << cnt << endl;
  return 0;
}