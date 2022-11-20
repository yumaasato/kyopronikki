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
  int h,w; cin >> h >> w;

  vector<vector<char> > c(h+1, vector<char>(w+1));

  rrep(i,1,h)rrep(j,1,w) {
    cin >> c[i][j];
  }

  vector<vector<int> > dp(h+1, vector<int>(w+1, -inf));
  dp[1][1] = 1;
  rrep(i,1,h)rrep(j,1,w) {
    if(i == 1 && j == 1) continue;

    if(c[i][j] == '#') continue;
    else {
      dp[i][j] = max(dp[i-1][j]+1, dp[i][j-1]+1);
    }
  }

  int ans = 0;
  rrep(i,1,h)rrep(j,1,w) {
    ans = max(ans, dp[i][j]);
  }

  cout << ans << endl;
  return 0;
}