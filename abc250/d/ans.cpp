#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  const int M = 1e6;
  vector<bool> isP(M+1, true);
  vector<int> primes;
  isP[0] = isP[1] = false;
  for (int i = 2; i <= M; ++i) {
    if (!isP[i]) continue;
    primes.push_back(i);
    for (ll j = (ll)i*i; j <= M; j += i) {
      isP[j] = false;
    }
  }

  vector<int> s(M+1);
  for (int p : primes) s[p] = 1;
  rep(i,M) s[i+1] += s[i];

  ll n;
  cin >> n;
  ll ans = 0;
  for (int q : primes) {
    int r = min<ll>(n/q/q/q, q-1);
    ans += s[r];
  }
  cout << ans << endl;
  return 0;
}