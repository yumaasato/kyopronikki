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
using P = pair<int, int>;

int main() {
  ll n,l,r; cin >> n >> l >> r;
  vector<ll> a(n),s1(n+1),s2(n+1);
  ll sum = 0,ans = 1e15;
  rep(i,n) {
    cin >> a[i];
    sum += a[i];
  }
  rep(i,n) s1[i+1] = min(s1[i]+a[i], l*(i+1));
  reverse(all(a));
  rep(i,n) s2[i+1] = min(r*(i+1),s2[i]+a[i]);
  rrep(i,0,n) ans = min(ans,s2[n-i]+s1[i]);
  cout << ans << endl;
  return 0;
}