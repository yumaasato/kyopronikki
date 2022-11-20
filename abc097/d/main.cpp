#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using mint = modint998244353;
using P = pair<int, int>;

struct UnionFind {
    vector<int> par, rank, siz;
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

  int root(int x) {
     if (par[x] == -1) return x;
     else return par[x] = root(par[x]);
}

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  bool unite(int x, int y) {
    int rx = root(x), ry = root(y);
    if (rx==ry) return false;

    if (rank[rx]<rank[ry]) swap(rx,ry);
    par[ry] = rx;
    if (rank[rx] == rank[ry]) rank[rx]++;
    siz[rx] += siz[ry];
    return true;
  }

  int size(int x) {
      return siz[root(x)];
  }
};

int main() {
  int n, m; cin >> n >> m;
  UnionFind uf(n);
  vector<int> p(n);

  rep(i,q) {
    int x,y; cin >> x >> y;
    uf.unite(x-1,y-1);
  }
  int cnt = 0;
  rep(i,n) {
    if(uf.same(i,p[i]-1)) cnt++;
  }
  cout << cnt << endl;
  return 0;
}