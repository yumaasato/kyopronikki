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

int main() {
  int n,x; cin >> n >> x;
  vector<vector<bool> > dp(n+1,vector<bool>(x+1,false));

  dp[0][0] = true;

  vector<int> a(n+1);
  vector<int> b(n+1);

  rep(i,n) {
    cin >> a[i] >> b[i];
  }

  rep(i,n)rrep(j,0,x) {
    if(dp[i][j]) {
      if(j + a[i] <= x) dp[i+1][j+a[i]] = true;
      if(j + b[i] <= x) dp[i+1][j+b[i]] = true;
    }
  }

  if(dp[n][x]) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}