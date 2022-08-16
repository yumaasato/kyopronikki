#include <bits/stdc++.h>
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// 入力
int n, W;
int weight[110], value[110];

// DPテーブル
int dp[110][10010];

int main(void) {
  cin >> n >> W;
  for (int i = 0; i < n; ++i) cin >> weight[i] >> value[i];

  // DPループ
  for (int i = 0; i < n; ++i) {
    for (int sum_w = 0; sum_w <= W; ++sum_w) {
      if (sum_w - weight[i] >= 0) {
      // i番目の商品を選ぶ場合
      chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
      }

      // i番目の商品を選ばない場合
      chmax(dp[i+1][sum_w], dp[i][sum_w]);
    }
  }

  cout << dp[n][W] << endl;
}