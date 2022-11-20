#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main() {
  ll n,k,x; cin >> n >> k >> x;
  vector<ll> a(n+1);
  rep(i,0,n) cin >> a[i];

  ll ans = 0;
  rep(i,0,n) ans += a[i];

  ll m = 0;
  rep(i,0,n) m += a[i]/x;
  m = min(m,k);
  ans -= m*x, k -= m;

  rep(i,0,n) a[i] %= x;
  sort(a.begin(), a.end(), greater<ll>());

  rep(i,0,n) {
    if(k == 0) {
      cout << ans << endl;
      exit(0);
    }
    ans -= a[i]; k--;
  }
  cout << ans << endl;
}