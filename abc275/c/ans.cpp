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
  set<P> st;
  vector<P> ps;
  rep(i,9) {
    string s; cin >> s;
    rep(j,9) {
      if(s[j] == '#') {
        st.emplace(i,j);
        ps.emplace_back(i,j);
      }
    }
  }

  int n = ps.size();
  int ans = 0;
  rep(ai,n)rep(bi,n) if(ai != bi) {
    P a = ps[ai], b = ps[bi];
    int di = b.first-a.first;
    int dj = b.second-a.second;
    P c(b.first-dj, b.second+di);
    P d(c.first-di, c.second-dj);
    if(st.count(c) && st.count(d)) {
      ans++;
    }
  }
  ans /= 4;
  cout << ans << endl;
  return 0;
}