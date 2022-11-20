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
  int n; cin >> n;
  vector<vector<ll> > a(n,vector<ll>(n));
  rep(i,n) {
    string s; cin >> s;
    rep(j,n) {
      a[i][j] = s[j]-'0';
    }
  }

  int dx[8] = {0,1,1,1,0,-1,-1,-1};
  int dy[8] = {1,1,0,-1,-1,-1,0,1};

  ll ans = 0;
    rep(i,n)rep(j,n) {
      int x = i; int y = j;
      rep(l,8) {
        ll num = 0;
        rep(_,n) {
          num = num*10+a[x][y];
          x = (x+dx[l]+n)%n;
          y = (y+dy[l]+n)%n;
        }
      ans = max(ans,num);
    }
  }
  cout << ans << endl;
  return 0;
}