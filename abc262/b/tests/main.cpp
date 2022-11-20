#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n,m; cin >> n >> m;
  vector g(n, vector<int>(n));

  re(i,m) {
    int u,v; cin >> u >> v;
    u--; v--;
    g[u][v] = g[v][u] = 1;
  }

  int ans = 0;
  rep(i,0,n)rep(j,i+1,n)rep(k,j+1,n) {
    if(!g[i][j]) continue;
    if(!g[i][k]) continue;
    if(!g[k][j]) continue;
    ans++;
  }
  cout << ans << endl;
}