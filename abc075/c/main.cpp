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
  int n,m; cin >> n >> m;
  vector<int> a(m),b(m);
  rep(i,m) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
  }

  int ans = 0;
  rep(i,m) {
    dsu uf(n);
    rep(j,m) {
      if(i == j) continue;
      uf.merge(a[j],b[j]);
    }
    int cnt = 0;
    rep(k,n) {
      if(k == uf.leader(k)) cnt++;
    }
    if(cnt > 1) ans++;
  }
  cout << ans << endl;
  return 0;
}