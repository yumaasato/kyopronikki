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

int n,x,y;
vector<int> g[200010];
vector<int> ans;

vector<bool> visited(200010);


void dfs(int crr, int pre) {
  ans.push_back(crr);
  for(int nxt:g[crr]) {
    if(nxt != pre) {
      dfs(nxt,crr);
      ans.push_back(crr);
    }
  }
}

int main() {
  cin >> n >> x >> y;
  rep(i,n) {
    int u,v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  rep(i,n) sort(g[i].begin(), g[i].end());
  ans.push_back(1);
  dfs(1,-1);

  rep(i,ans.size()) {
    if(i >= 1) cout << " ";
    cout << ans[i];
  }
  cout << endl;
  return 0;
}