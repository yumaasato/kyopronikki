#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double f(ll a, ll b, ll n) {
  return (double) a /sqrt(n+1) + (double) b * n;
}

int main() {
  ll a,b; cin >> a >> b;
  ll num = pow((double) a/(b*2), 2./3.) - 1;
  double ans = a;
  for(ll i = num-1; i <= num + 1; i++) {
    ans = min(ans,f(a,b,i));
  }
  printf("%.10f", ans);
  return 0;
}