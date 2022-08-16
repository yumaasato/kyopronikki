#include <bits/stdc++.h>
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// 入力
int n, W;
int weight[110], value[110];

// DPテーブル
int dp[110][10010];

int main() {
  cin >> n >> W;
  for (int i = 0; i < n; ++i) cin >> value[i] >> weight[i];

  // DP初期条件: dp[0][w] = 0
  for (int w = 0; w <= W; ++w) dp[0][w] = 0;

  // DPループ
  for (int i = 0; i < n; ++i) {
    for (int sum_w = 0; sum_w <= W; ++sum_w) {
      if (sum_w - weight[i] >= 0) {
      chmax(dp[i+1][w], dp[i][w-weight[i]] + value[i]);
      }
      else dp[i+1][w] = dp[i][w];
    }
  }

  cout << dp[n][W] << endl;
}