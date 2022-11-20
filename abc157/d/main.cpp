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
// using mint = modint998244353;
using P = pair<int, int>;

int main() {
  int n,m,k; cin >> n >> m >> k;
  vector<int> s(n);
  vector<vector<int> > t(n);

  dsu uf(n);
  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    s[a]++; s[b]++;
    uf.merge(a,b);
  }
  rep(i,k) {
    int c,d; cin >> c >> d;
    c--; d--;
    t[c].push_back(d);
    t[d].push_back(c);
  }

  rep(i,n) {
    int ans = uf.size(i)-1-s[i];
    for(int u : t[i]) {
      if(uf.same(i,u)) --ans;
    }
    if(i) printf(" ");
    printf("%d", ans);
  }
  cout << endl;
  return 0;
}