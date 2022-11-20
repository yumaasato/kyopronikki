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

ll n,x;
ll ans = 0;
vector<vector<ll> > a;

void dfs(ll i, ll s) {
  if(i == n) {
    if(s == x) ans++;
    return;
  }
  for (ll c: a[i]) {
    if(s > x/c) continue;
    dfs(i+1,s*c);
  }
}

int main() {
  cin >> n >> x;
  a.resize(n);

  rep(i,n) {
    ll l; cin >> l;
    a[i] = vector<ll>(l);
    rep(j,l) {
      cin >> a[i][j];
    }
  }

  dfs(0,1);
  return 0;
}