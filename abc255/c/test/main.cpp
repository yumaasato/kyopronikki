#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x,a,d,n; cin >> x >> a >> d >> n;
  if(d == 0) {
    cout << abs(a-x) << endl;
    exit(0);
  }
  if(d<0) {
    a = a+d*(n-1);
    d=-d;
  }

  ll i = (x-a)/d;
  
  if(i < 0) i = 0;
  if(i >= n) i = n-1;
  ll ans = abs(a+d*i-x);
  ll n1 = abs(a+d*(i+1)-x);
  ans = min(n1,ans);
  cout << ans << endl;
  return 0;
}