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

int main() {
  int n,m; cin >> n >> m;
  vector<ll> a(n+1);
  vector<ll> s(n+1);

  rrep(i,1,n) {
    cin >> a[i];
    s[i] = s[i-1] + a[i];
  }

  ll num = 0;
  rrep(i,1,m) {
    num += i*a[i];
  }

  ll ans = -INF;
  ans = max(num,ans);

  for(int i = m; i < n; i++) {
    num = num - (s[i] - s[i-m]) + m*a[i+1];
    ans = max(num,ans);
  }
  cout << ans << endl;
  return 0;
}