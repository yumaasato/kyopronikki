#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  const int m = 200090;
  dsu uf(m);

  for(int i = 0, j = n-1; i < j; i++, j--) {
      uf.merge(a[i],a[j]);
  }

  ll ans = 0;
  rep(i,m) {
    if(uf.leader(i) == i) {
      ans += uf.size(i) - 1;
    }
  }
  cout << ans << endl;
  return 0;
}