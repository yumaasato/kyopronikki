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
  ll n,k; cin >> n >> k;
  vector<ll> a(n);
  vector<ll> s(n+1);

  rep(i,n) {
    cin >> a[i];
    s[i+1] = s[i]+a[i];
  }

  map<ll,ll> mp;
  ll ans = 0;
  rrep(r,1,n) {
    mp[s[r-1]]++;
    ans += mp[s[r]-k];
  }
  cout << ans << endl;
  return 0;
}