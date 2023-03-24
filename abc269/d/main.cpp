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
using P = pair<int, int>;
int dx[6] = {-1,-1,0,0,1,1};
int dy[6] = {-1,0,-1,1,0,1};

int main() {
  int n; cin >> n;
  vector<P> p(n);


  rep(i,n) {
    cin >> p[i].first >> p[i].second;
  }
  map<P,int> mp;
  rep(i,n) mp[p[i]] = i;

  dsu uf(n);

  rep(i,n) {
    auto [x,y] = p[i];
    auto check = [&] (P q) {
      if(mp.count(q)) {
        uf.merge(i,mp[q]);
      }
    };
    rep(j,6) {
      int nx = x + dx[j];
      int ny = y + dy[j];
      check(P(nx,ny));
    }
  }

  int ans = 0;
  rep(i,n) if(uf.leader(i) == i) ans++;
  cout << ans << endl;
  return 0;
}