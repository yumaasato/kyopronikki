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
static const ll INF = 1000000000000000000LL;
static const int inf = 1e9+7;
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
  double a,b; cin >> a >> b;
  ll left = 0, right = 3e18;
  while(right - left > 1) {
    ll mid = (left+right) / 2;
    double g = sqrt((double)mid);
    double g1 = sqrt((double)mid+1);
    if(b <= a/g - a/g1) left = mid;
    else right = mid;
  }
  double ans =  a/sqrt((double)right) + b*(right-1);
  cout<<fixed<<setprecision(10)<<ans<<endl;
  return 0;
}