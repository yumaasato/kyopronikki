#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;

int main() {
  int t; cin >> t;
  rep(i,t) {
    ll n; cin >> n;
    ll p = 0,q = 0;
    for(ll i = 2; i*i*i <= n; i++) {
      if(n % i != 0) continue;
      if((n/i) % i == 0) {
        p = i;
        q = n / i / i;
      } else {
        p = sqrt(n / i);
        q = i;
      }
      break;
    }
    cout << p << " " << q << "\n";
  }
  return 0;
}