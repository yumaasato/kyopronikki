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

map<ll,ll> mp;
ll f(ll x) {
  if(x == 0) return 1;
  if(mp.count(x)) return mp[x];
  ll res = f(x/2)+f(x/3);
  return mp[x] = res;
}
  
int main() {
  ll n; cin >> n;
  cout << f(n) << endl;
  return 0;
}