#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,x,y; cin >> n >> x >> y;
  vector<vector<int>> to(n+1);
  rep(i,0,n-1) {
    int a,b; cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> ans;
  auto dfs = [&](auto f, int v, int p = -1) -> bool {
    if(v == x)  {
      ans.push_back(v);
      return true;
    }
    for (int u: to[v]) {
      if (u == p) continue;
      if(f(f,u,v)) {
        ans.push_back(v);
        return true;
      }
    }
    return false;
  };
  dfs(dfs,y);
  rep(i,0,ans.size()) cout << ans[i] << " ";
  cout << endl;
}