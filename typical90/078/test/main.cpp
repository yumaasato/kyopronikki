#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

using Graph = vector<vector<int>>;

int main() {
  int n,m; cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  Graph G(n);
  re(i,m) {
  cin >> a[i] >> b[i];
  a[i]--; b[i]--;
  G[a[i]].push_back(b[i]);
  }
  int ans = 0;
  re(i,n) {
    int sum = 0;
    for(auto s: G[i]) { // 隣接頂点を辺ごとに調査
      if(s < i) sum++;
    }
    if(sum == 1) ans++;
  }
  cout << ans << endl;
}