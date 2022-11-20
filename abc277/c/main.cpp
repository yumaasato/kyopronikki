#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
typedef long long ll;

map<ll,vector<ll> > g;
map<ll,bool> visited;

ll num = 1;
void dfs(ll pos) {
  visited[pos] = true;
  if(g[pos].size() == 0) return;
  for(int i = 0; i < g[pos].size(); i++) {
    ll nex = g[pos][i];
    if(visited[nex] == true) continue;
    dfs(nex);
    num = max(num,nex);
  }
}

int main() {
  ll n; cin >> n;

  rep(i,n) {
    ll a,b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  dfs(1);
  cout << num << endl;
  return 0;
}