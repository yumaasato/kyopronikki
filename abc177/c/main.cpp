#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  const ll mod = 1000000007;

  ll sum = 0;
  rep(i,n) {
    cin >> a[i];
    sum += a[i];
    sum = (sum+mod)%mod;
  }


  ll ans = 0;
  rep(i,n) {
    sum -= a[i]; sum = (sum+mod)%mod;
    ans += a[i]*sum; ans %= mod;
  }

  cout << ans << endl;
  return 0;
}