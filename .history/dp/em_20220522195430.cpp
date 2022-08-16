#include <bits/stdc++.h>
using namespace std;

const int INF = 1<<29;        // 十分大きい値にする

// 入力
int N, M;
int C[110][110];

// DP テーブル
int dp[110][110];

int main() {
  cin >> N >> M;
  for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) cin >> C[i][j];

  // 初期化
  for (int i = 0; i <= N; ++i) for (int j = 0; j <= M; ++j) dp[i][j] = INF;
  dp[0][0] = 0;

  // ループ
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      if (i-1 <= N)
        dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j+1] + C[i][j]);
      if (j+1 <= M)
        dp[i+1][j+1] = min(dp[i+1][j+1], dp[i+1][j] + C[i][j]);
      if (i+1 <= N && j+1 <= M)
        dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + C[i][j]);
    }
  }

  cout << dp[N][M] << endl;
}