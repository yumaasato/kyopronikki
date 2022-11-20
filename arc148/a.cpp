#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i,0,n) cin >> a[i];
  int ans = 1e9;
  rep(i,0,n-1) {
    ans = min(ans, gcd(a[i],a[i+1]));
  }
  if(ans != 1) cout << 2 << endl;
  else cout << ans << endl;
}