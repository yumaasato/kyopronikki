#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

vector<int> g[200010];
vector<int> ans;

void dfs(int pos, int par) {
  ans.push_back(pos);
  for(int i = 0; i < g[pos].size(); i++) {
    if(g[pos][i] != par) {
      int nex = g[pos][i];
      dfs(nex,pos);
      ans.push_back(pos);
    }
  }
}

int main() {
  int n; cin >> n;
  rep(i,n-1) {
    int a,b; cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  rrep(i,1,n) sort(g[i].begin(),g[i].end());
  dfs(1,-1);

  rep(i,ans.size()) {
    if(i >= 1) cout << " ";
    cout << ans[i];
  }
  cout << endl;
  return 0;
}