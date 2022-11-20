#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using mint = modint998244353;
using P = pair<int, int>;

map<ll,ll> memo;

ll calc_digit(ll n) {
  int res = 0;
  while(n) {
    ++res;
    n /= 10;
  }
  return res;
}

ll pow10(ll k) {
  ll num = 1;
  ll d = calc_digit(k);
  rep(i,d-1) {
    num *= 10;
  }
  return num;
}

ll f(ll x) {
  ll num = (pow10(x))%mod;
  ll s1 = ((((num-1)*num)%mod)*inv)%mod;
  ll n1 = (x - num + 1)%mod;
  ll s2 = ((n1*(n1+1))%mod*inv)%mod;
  ll res = (s1 + s2)%mod;
  return res;
}

int main() {
  ll n; cin >> n;
  cout << f(n) << endl;
  return 0;
}