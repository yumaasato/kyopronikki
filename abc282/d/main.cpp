#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

ll nc(ll a) {
  return a*(a-1)/2;
}

int main() {
  int n,m; cin >> n >> m;
  vector<vector<int>> to(n);
  rep(i,m) {
    int u,v; cin >> u >> v;
    u--; v--;
    to[u].push_back(v);
    to[v].push_back(u);
  }

  vector<int> c(n,-1);
  vector<int> cv(2);

  auto dfs = [&](auto dfs, int v, int nc = 0) {
    if(c[v] != -1) return c[v] == nc;
    c[v] = nc;
    cv[nc]++;
    fore(ex,to[v]) {
      if(!dfs(dfs,ex,!nc)) return false;
    }
    return true;
  };
  ll ans = nc(n) - m;
  rep(i,n) {
    if(c[i] != -1) continue;
    cv = vector<int>(2);
    if(!dfs(dfs,i)) {
      cout << 0 << endl;
      return 0;
    }
    fore(num,cv) ans -= nc(num);
  }
  cout << ans << endl;
  return 0;
}