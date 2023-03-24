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
using P = pair<int, int>;

int main() {
  int n,k; cin >> n >> k;
  vector<int> p(n);
  rep(i,n) cin >> p[i];

  if(k == 1) {
    vector<int> a(n+1,-1);
    rep(i,n) {
      a[p[i]] = i+1;
    }
    rrep(i,1,n) cout << a[i] << '\n';
    return 0;
  }

  dsu uf(n+1);
  set<int> st;
  vector<int> ans(n+1,-1);

  rep(i,n) {
    auto it = st.lower_bound(p[i]);
    if(it == st.end()) {
      st.insert(p[i]);
    } else {
      uf.merge(*it,p[i]);
      st.erase(it);
      if(uf.size(p[i]) != k) st.insert(p[i]);
      else ans[uf.leader(p[i])] = i+1;
    }
  }
  rrep(i,1,n) {
    cout << ans[uf.leader(i)] << endl;
  }
  return 0;
}