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

map<ll,ll> mp;

ll f(ll n) {
  ll t = n/2;
  ll w = n/3;
  mp[t] = f(t);
  mp[w] = f(w);
  return mp[t]+mp[w];
}

int main() {
  ll n; cin >> n;
  cout << f(n) << endl;
  return 0;
}