#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  int a[110], dp[110][10010]; // dp[i番目までの整数][総和]
  cin >> n >> m;
  for(int i = 0; i < n; i++) cin >> a[i];

  memset(dp,0,sizeof(dp)) // 初期値を0にする
  dp[0][0] = true

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= m; j++) {
      dp[i+1][j] |= dp[i][j]; // |= は論理和
      if(j >= a[i]) dp[i+1][j] |= dp[i][j-a[i]];
    }
  }

  
  return 0;
}