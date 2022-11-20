#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll,ll> memo;

ll f(ll k) {
  if(k == 0) return 1;
  if(memo.count(k)) return memo[k];
  return memo[k] = f(k/2) + f(k/3);
}

int main() {
  ll n; cin >> n;

  cout << f(n) << endl;
  return 0;
}