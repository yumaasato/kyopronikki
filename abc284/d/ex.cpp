// 計算量O(√N) 10^9程度
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
void chmax(ll & x, ll y) { x = max(x,y);}
void chmin(ll & x, ll y) { x = min(x,y);}
// const ll INF = 1000000000000000000LL;
// const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<ll, ll>;

vector<P> prime_factorize(ll n) {
  vector<P> res;
  for (ll p = 2; p * p <= n; ++p) {
  if (n % p != 0) continue;
    ll num = 0;
    while (n % p == 0) { ++num; n /= p; }
    res.push_back(make_pair(p, num));
  }
  if (n != 1) res.push_back(make_pair(n, 1));
  return res;
}

int main() {
  int t; cin >> t;
  rep(i,t) {
    ll n; cin >> n;
    ll a,b;
    vector<P> pf = prime_factorize(n);
    bool fa = false, fb = false;
    for (auto [p, e] : pf) {
        if(e == 2)  {
          a = p;
          fa = true;
        }
        else {
          b = p;
          fb = true;
        }
      if(fa == true && fb == true) {
        cout << a << " " << b << endl;
        fa = false; fb = false;
      }
    }
  }
  return 0;
}