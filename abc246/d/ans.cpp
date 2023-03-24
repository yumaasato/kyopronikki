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

ll n;
ll f(ll a, ll b) {
  return a*a*a + a*a*b + a*b*b + b*b*b;
}

ll check(ll x,ll a) {
  ll right = -1, left = 1e6;
  while(left - right > 1) {
    ll b = (right+left)/2;
    if(f(a,b) >= n) left = b;
    else right = b;
  }
  return f(a,left);
}

int main() {
  cin >> n;
  ll res = INF;
  for(ll a = 0; a <= 1e6; ++a) {
    res = min(res,check(n,a));
  }
  cout << res << endl;
  return 0;
}