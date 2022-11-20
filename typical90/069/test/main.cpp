#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll mod = 1000000007LL;

ll power(ll a, ll b) {
  ll ans = 1;
  if(b>0) {
    ans = power(a,b/2);
    if (b%2==0) ans = (ans*ans) % mod;
    else ans = (((ans*ans)%mod)*a)%mod;
  }
  return ans;
}

int main() {
  ll n,k; cin >> n >> k;
  if (k == 1) {
    cout << (n==1 ? 1 : 0) << endl;
  }
  else if (n==1) {
    cout << k%mod << endl;
  }
  else if (n==2) {
    cout << k*(k-1)%mod << endl;
  }
  else {
    ll ans = k*(k-1)%mod*power(k-2,n-2)%mod;
    cout << ans << endl;
  }
}