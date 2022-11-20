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
  ll n,m,t; cin >> n >> m >> t;
  vector<ll> a(n);
  rrep(i,1,n-1) cin >> a[i];

  vector<ll> b(n);
  rrep(i,1,m) {
    ll x,y;
    cin >> x >> y;
    b[x] = y;
  }

  rep(i,1,n) {
    t += b[i];
    if(a[i] >= t) {
      cout << "No" << endl;
      return 0;
    }
    t -= a[i];
  }
  cout << "Yes" << endl;
  return 0;
}