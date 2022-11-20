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
  vector<int> a(n);
  vector<int> s(410);

  rep(i,n) {
    cin >> a[i];
    s[a[i]+200]++;
  }

  ll ans = 0;
  rrep(i,-200,200)rrep(j,i+1,200) {
    ll x = s[i+200]; ll y = s[j+200];
    ans += x*y*(i-j)*(i-j);
  }

  cout << ans << endl;
  return 0;
}