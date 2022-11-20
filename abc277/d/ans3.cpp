#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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
  int n,m; cin >> n >> m;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(all(a));
  dsu uf(n);
  rep(i,n) {
    int j = (i+1)%n;
    if(a[i] == a[j] || (a[i]+1)%m == a[j]) {
      uf.merge(i,j);
    }
  }
  vector<ll> s(n);
  rep(i,n) s[uf.leader(i)] += a[i];
  ll mx = 0, tot = 0;
  rep(i,n) mx = max(mx,s[i]);
  rep(i,n) tot += a[i];
  cout << tot-mx << endl;
  return 0;
}