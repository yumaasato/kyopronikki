#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

vector<int> g[200010];
vector<bool> visited(200010);
vector<int> ans;

void dfs(int pos, int pre) {
  ans.push_back(pos);
  for(int &nex : g[pos]) {
    if(nex != pre) {
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

  rrep(i,1,n) {
    sort(g[i].begin(), g[i].end());
  }
  dfs(1,-1);

  rep(i,ans.size()) {
    if(i >= 1) cout << " ";
    cout << ans[i];
  }
  cout << endl;
  return 0;
}