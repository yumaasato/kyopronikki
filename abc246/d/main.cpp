#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;

ll f(ll a, ll b) {
  return a*a*a + a*a*b + a*b*b + b*b*b;
}

ll check(ll n, ll a) {
  ll ng = -1, ok = 1e6;
  while(ok - ng > 1) {
      ll mid = (ng + ok) / 2;
      if(f(a,mid) >= n) ok = mid;
      else ng = mid;
    }
    return f(a,ok);
}

int main() {
  ll n; cin >> n;
  ll ans = 1LL<<60;
  for(ll a = 0; a <= 1e6; a++) {
    ans = min(ans,check(n,a));
  }
  cout << ans << endl;
  return 0;
}