// TLEとなったソースコード O(mn) = 10^10
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,m; cin >> n >> m;
  vector<int> a(n);
  rep(i,0,n) cin >> a[i];

  while(m--) {
    sort(a.begin(),a.end(), greater<int>());
    a[0] /= 2;
  }
  ll ans = 0;

  rep(i,0,n) ans += a[i];
  cout << ans << endl;
}