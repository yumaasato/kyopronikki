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
  rep(i,n) cin >> a[i];
  int q; cin >> q;

  map<int,vector<int> >indexes;
  rep(i,n) indexes[a[i]].push_back(i);

  rep(i,q) {
    int l,r,x; cin >> l >> r >> x;
    l--; r--;

    auto st = lower_bound(all(indexes[x]),l);
    auto gl = upper_bound(all(indexes[x]),r);

    int ans = gl-st;
    cout << ans << '\n';
  }
  return 0;
}