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
using P = pair<int, int>;

// 約数列挙
int calc_divisors(int N) {
  set<int> res;
  for (int i = 1; i * i <= N; ++i) {
    if (N % i != 0) continue;
    res.insert(i);
    if (N / i != i) res.insert(N / i);
  }
  return res.size();
}

int calc_digit(ll n) {
  int res = 0;
  while(n) {
    ++res;
    n /= 10;
  }
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

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  // vector<ll> b(n);
  map<ll,ll> mp;
  map<ll,ll> b;
  rep(i,n) {
    cin >> a[i];
    mp[i] = a[i];
  }

  bool f = false;
  int q; cin >> q;
  ll sum = 0;
  ll num = 0;

  rep(j,q) {
    int k; cin >> k;
    if(k == 1) {
    ll i; cin >> i;
    num = i;
    mp.clear();
    b.clear();
    }
    if(k == 2) {
      ll i,x; cin >> i >> x;
      b[i-1] += x;
    }
    if(k == 3) {
        ll i; cin >> i;
        cout << mp[i-1] + b[i-1]+num << endl;
    }
  }
  return 0;
}