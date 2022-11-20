#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

ll s(ll a) {
  return a*(a+1)/2;
}

ll s2(ll n, ll a) {
  return s(n/a)*a;
}

int main() {
  ll n,a,b; cin >> n >> a >> b;
  ll ans = s(n);
  ans -= s2(n,a);
  ans -= s2(n,b);
  ans += s2(n,lcm(a,b));
  cout << ans << endl;
  return 0;
}