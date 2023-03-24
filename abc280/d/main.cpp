#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<ll, ll>;

// 素因数分解
vector<P> prime_factorize(ll n) {
    vector<P> res;
    for (ll p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

ll how_many(ll N, ll P) {
    ll res = 0;
    while (N % P == 0) {
        N /= P;
        ++res;
    }
    return res;
}

int main() {
  ll k; cin >> k;
  auto pf = prime_factorize(k);
  ll res = 0;
  for(auto re : pf) {
    ll p = re.first, s = re.second;
    cout << re.first << " " << re.second << endl;
    ll num = 0;
    ll t = 0;
    for(ll i = p; i <= k; i += p) {
      t += how_many(i,p);
      if(t >= s) {
        res = max(res,i);
        break;
      }
    }
  }
  cout << res << endl;
  return 0;
}