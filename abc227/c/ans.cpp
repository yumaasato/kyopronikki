#include <bits/stdc++.h>
using namespace std;
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
  ll n; cin >> n;
  ll ans = 0;

  for(ll a = 1; a*a*a <= n; a++) {
    for(ll b = a; a*b*b <= n; b++) {
      ans += n/(a*b) - b + 1;
    }
  }
  cout << ans << endl;
  return 0;
}