#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const int inf = 1000000007;

int main() {
  int n,m; cin >> n >> m;
  vector<ll> dp(n+1);
  vector<bool> c(n+1);

  rep(i,0,m)  {
    int a; cin >> a;
    c[a] = true;
  }

  dp[0] = 1;
  rrep(i,1,n) {
    if(c[i]) continue;
    if(i == 1) dp[i] = dp[i-1];
    else dp[i] = (dp[i-1] + dp[i-2]) % inf;
  }
  cout << dp[n] << endl;
}