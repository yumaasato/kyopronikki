#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
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

int n,m;
vector<bool> visited(55);
vector<int> a(55),b(55);
bool g[55][55];

void dfs(int pos) {
  visited[pos] = true;
  rep(i,n) {
    if(g[pos][i] == false) continue;
    if(visited[i] == true) continue;
    dfs(i);
  }
}

int main() {
  cin >> n >> m;

  rep(i,m) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }
  int ans = 0;

  rep(i,m) {
    g[a[i]][b[i]] = g[b[i]][a[i]] = false;
    rep(j,n) visited[j] = false;

    dfs(0);
    bool bridge = false;
    rep(i,n) if(visited[i] == false) bridge = true;
    if(bridge) ans += 1;
    g[a[i]][b[i]] = g[b[i]][a[i]] = true;
  }
  cout << ans << endl;
  return 0;
}