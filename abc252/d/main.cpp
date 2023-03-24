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
// using mint = modint998244353;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  int mn = 1;
  vector<int> s(200010);

  rep(i,n) {
    int a; cin >> a;
    s[a]++;
    mn = max(mn,a);
  }

  int l = 1;
  ll ans = 0;
  int cnt = n-s[1];
  rrep(r,2,mn-1) {
    if(s[r] == 0) continue;
    cnt -= s[r];
    ans += s[r]*s[l]*cnt;
    cout << s[l] << " " << s[r] << " " << cnt << endl;
    l++;
    }

  cout << ans << endl;
  return 0;
}