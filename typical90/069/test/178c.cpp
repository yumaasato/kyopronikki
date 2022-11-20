#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int mod = 1e9+7;

ll power(ll n, int num) {
  ll sum = 1;
  rep(i,0,n) sum = sum*num%mod;
  return sum;
}

int main() {
  int n; cin >> n;

  ll ans = power(n,10)-power(n,9)-power(n,9)+power(n,8);
  ans %= mod;
  ans = (ans+mod)%mod;
  cout << ans << endl;
}