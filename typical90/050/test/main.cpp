#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const int inf = 1000000007;

int main() {
  int n,l; cin >> n >> l;
  vector<ll> dp(n+1);

  dp[0] = 1; 
  rrep(i,1,n) {
    if(i < l) dp[i] = dp[i-1];
    else dp[i] = (dp[i-1] + dp[i-l]) % inf;
  }

  cout << dp[n] << endl;
}