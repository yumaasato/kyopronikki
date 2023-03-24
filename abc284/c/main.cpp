#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
typedef long long ll;

int main() {
  int n,m; cin >> n >> m;
  dsu uf(n);
  rep(i,m) {
    int u,v; cin >> u >> v;
    u--; v--;
    uf.merge(u,v);
  }
  int ans = 0;
  rep(i,n) {
    if(uf.leader(i) == i) ++ans;
  }
  cout << ans << endl;
  return 0;
}