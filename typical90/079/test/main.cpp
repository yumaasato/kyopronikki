#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;
using namespace std;

int main() {
  int h,w; cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w)), b(h, vector<ll>(w));

  rep(i,0,h)rep(j,0,w) {
    cin >> a[i][j];
  }

  rep(i,0,h)rep(j,0,w) {
    cin >> b[i][j];
  }
  ll ans = 0;

  rep(i,0,h-1) {
    rep(j,0,w-1) {
      ll n = b[i][j] - a[i][j];
      ans += abs(n);
      a[i][j] += n; a[i+1][j] += n;
      a[i][j+1] += n; a[i+1][j+1] += n;
    }
  }
  bool flag = true;
  rep(i,0,h)rep(j,0,w) {
    if(a[i][j] != b[i][j]) {
      cout << "No" << endl;
      exit(0);
    }
  }

  cout << "Yes" << endl;
  cout << ans << endl;
  return 0;
}