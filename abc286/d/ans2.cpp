#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n),b(n);
  rep(i,n) {
    cin >> a[i] >> b[i];
  }
  vector<bool> dp(10090);
  dp[0] = true;

  rep(i,n) {
    drep(j,10000,0) {
      rrep(k,1,b[i]) {
        if (dp[j]==true && j+a[i]*k <= 1e4) dp[j+a[i]*k] = true;
      }
    }
  }
  if (dp[x]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}