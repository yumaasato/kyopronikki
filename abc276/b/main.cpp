#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  int n,m; cin >> n >> m;
  vector<int> g[100010];
  rep(i,m) {
    int a,b; cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  rrep(i,1,n) {
    cout << g[i].size() << " ";
    sort(g[i].begin(),g[i].end());
    rep(j,g[i].size()) {
      cout << g[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}