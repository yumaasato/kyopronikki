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
using P = pair<int, int>;

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

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  queue<int> que;
  int q; cin >> q;

  rep(i,q) {
    int d; cin >> d;
    if(d == 1) {
      int k,x; cin >> k >> x;
      a[k-1] = x;
    }
    else {
      int k; cin >> k;
      cout << a[k-1] << endl;
    }
  }
  return 0;
}