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

int main() {
  ll n; cin >> n;
  ll ans = 0;

  if(n >= 1000) ans += n-999;
  if(n >= 1000000) ans += n-999999;
  if(n >= 1000000000) ans += n-999999999;
  if(n >= 1000000000000) ans += n-999999999999;
  if(n >= 1000000000000000) ans += n-999999999999999;

  cout << ans << endl;
}