#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;

vector<bool> visited;
bool f;

void dfs(const vector<vector<int> > &g,int pos) {
  visited[pos] = true;
  int cnt = 0;
  for(auto &nv : g[pos]) {
    if(visited[nv]) {
      cnt++;
      continue;
    }
    dfs(g,nv);
  }

  if(cnt > 1) f = false;
  return;
}

int main() {
  int n,m; cin >> n >> m;
  vector<vector<int> > g(n);
  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  f = true;
  visited.assign(n,false);

  rep(i,n) {
    if(g[i].size() > 2) {
      f = false;
      break;
    }
    if(visited[i]) continue;
    dfs(g,i);
  }

  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}