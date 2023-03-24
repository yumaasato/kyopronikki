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
// const ll INF = 1000000000000000000LL;
// const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<ll, int>;

vector<P> prime_factorize(ll n) {
  vector<P> res;
  for (ll p = 2; p * p <= n; ++p) {
  if (n % p) continue;
    int num = 0;
    while (n % p == 0) {
      ++num;
      n /= p;
    }
    res.emplace_back(p, num);
  }
  if (n != 1) res.emplace_back(n, 1);
  return res;
}

int isPrime(int x) {
  int i;
    if(x<2) return 0;
    else if(x==2) return 1;
    if(x%2==0) return 0;
  for(i = 3; i*i <= x; i+= 2) {
    if(x%i == 0) return 0;
  }
  return 1;
}

int calc_digit(ll n) {
  int res = 0;
  while(n) {
    ++res;
    n /= 10;
  }
  return res;
}

// pで何回割り切れるか
ll f(ll num, int p) {
  if(num == 0) return 0;
  num /= p;
  return num + f(num,p);
}

int main() {
  ll k; cin >> k;
  auto pf = prime_factorize(k);

  ll ok = k, ng = 0;
  while(ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    bool flag = true;
    for(auto [num,cnt] : pf) {
      if(f(mid,num) < cnt) flag = false;
    }
    if(flag) ok = mid; else ng = mid;
  }
  cout << ok << endl;
  return 0;
}