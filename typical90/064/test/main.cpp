#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,q; cin >> n >> q;
  vector<int> a(n+1);
  vector<ll> b(n+1);

  rrep(i,1,n) cin >> a[i];

  ll ans = 0;
  rrep(i,1,n-1) {
    b[i] += a[i+1]-a[i];
    ans += abs(b[i]);
  }

  rrep(i,1,q) {
    int l,r,v; cin >> l >> r >> v;
    ll j = abs(b[l-1]) + abs(b[r]);
    if(l >= 2)  b[l-1] += v;
    if(r <= n-1) b[r] -= v;
    ll k = abs(b[l-1]) + abs(b[r]);
    ans += (k - j);
    cout << ans << endl;
  }
}