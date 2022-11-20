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
  int n; cin >> n;
  vector<ll> a(n);
  ll sum = 0;

  rep(i,n) {
    cin >> a[i];
    sum += a[i];
  }

  ll ans = 0;
  rep(i,n) {
    ans += (n-1)*a[i]*a[i];
    ans -= a[i]*(sum-a[i]);
  }
  cout << ans << endl;
  return 0;
}