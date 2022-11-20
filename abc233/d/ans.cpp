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
  int n; ll k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<ll> s(n+1);
  rep(i,n) s[i+1] = s[i] + a[i];
  map<ll,int> mp;
  ll ans = 0;
  rep(i,n+1) {
    ans += mp[s[i]];
    mp[s[i]+k]++;
  }
  cout << ans << endl;
  return 0;
}