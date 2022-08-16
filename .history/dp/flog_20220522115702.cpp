#include <bits/stdc++.h>
using namespace std;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

static const int INF = 1 << 60;
int n;
long long h[100010];
long long dp[100010];

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> h[i];

  for (int i = 0; i < 100010; i++) dp[i] = INF;

  dp[0] = 0;

  for (int i = 0; i < n; i++) {

  }

  return 0;
}