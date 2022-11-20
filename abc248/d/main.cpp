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
  int n; cin >> n;
  vector<int> a(n);
  map<int,vector<int> > mp;

  rep(i,n) {
    cin >> a[i];
    mp[a[i]].push_back(i);
  }


  int q; cin >> q;
  rep(i,q) {
    int l,r,x; cin >> l >> r >> x;
    cout << lower_bound(mp[x].begin(), mp[x].end(), r) - lower_bound(mp[x].begin(),mp[x].end(), l-1) << '\n';
  }
  return 0;
}