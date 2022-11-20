#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;

struct UnionFind {
  public:
  int par[100009];
  int siz[100009];
  void init(int n) {
    rrep(i,1,n) par[i] = -1;
    rrep(i,1,n) siz[i] = 1;
  }

  int root(int x) {
    while(true) {
      if (par[x]==-1) break;
      x = par[x];
    }
    return x;
  }

void unite(int x, int y) {
    int rx = root(x), ry = root(y);
    if (rx==ry) return;
    if (siz[rx]<siz[ry]) {
      par[rx] = ry;
      siz[ry] = siz[rx] + siz[ry];
    }
    else {
    par[ry] = rx;
    siz[rx] = siz[rx] + siz[ry];
  }
}

bool same(int x, int y) {
    if(root(x) == root(y)) return true;
    return false;
  }
};

int main() {
  int n,m; cin >> n >> m;
  vector<int> d(n);

  UnionFind uf;
  uf.init(n);

  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    if(uf.same(a,b)) {
      cout << "No" << endl;
      return 0;
    }
    uf.unite(a,b);
    d[a]++;
    d[b]++;
  }
  rep(i,n) {
    if(d[i] > 2) {
      cout << "No" << endl;
      return 0;
    }
    cout << "Yes" << endl;
    return 0;
  }
}