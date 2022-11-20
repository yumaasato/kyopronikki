#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  using P = pair<int, int>;
  P ANS = {0, 0};

  for (int d = 1; d <= 9; ++d) {
    ll x = 0;
    for (int j = 1; j <= N; ++j) {
      x = (10 * x + d) % M;
      if (x == 0) ANS = max(ANS, P({j, d}));
    }
  }

  auto [n, d] = ANS;
  if (n == 0) {
    cout << "-1" << '\n';
  } else {
    string s(n, '0' + d);
    cout << s << '\n';
  }
  return 0;
}