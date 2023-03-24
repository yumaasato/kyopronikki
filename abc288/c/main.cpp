#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)

int main() {
  int n,m; cin >> n >> m;
  dsu uf(n);
  int ans = 0;
  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    if(uf.same(a,b)) {
      ans++;
    }
    uf.merge(a,b);
  }
  cout << ans << endl;
}