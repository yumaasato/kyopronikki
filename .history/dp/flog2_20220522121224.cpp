#include <bits/stdc++.h>
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
int n, k;
long long h[100010];
long long dp[100010];

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> h[i];

  for (int i = 0; i < 100010; i++) dp[i] = INF;

  dp[0] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= k; j++) {
      // iから1~k進んだ際のコスト(dp)を記載する
    chmin(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
    }
  }

  cout << dp[n-1] << endl;
  return 0;
}