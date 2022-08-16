#include <bits/stdc++.h>
using namespace std;
static const int INF = 1 << 60;
template <typename T>
const T& min(const T& a, const T& b)
  return b < a ? b : a;


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