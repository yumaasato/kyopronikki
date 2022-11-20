#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int n; cin >> n;
  set<pair<int,int> > st;

  st.insert(make_pair(-2e9,-2e9));
  st.insert(make_pair(2e9,2e9));
  rep(i,n) {
    int x,y; cin >> x >> y;
    auto it = st.lower_bound(make_pair(x,y)); it--;
    if(it->first <= x && x <= it->second) {
      x = min(x,it->first); y = max(y,it->second);
      st.erase(it);
    }
    it=st.lower_bound(make_pair(x,y));
    while(true) {
      if(x <= it->first && it->first <= y) {
        y = max(y,it->second);
        it=st.erase(it);
      }
      else break;
    }
    st.insert(make_pair(x,y));
  }

  fore(pa,st) {
    if(pa.first == -2e9 || pa.first == 2e9) continue;
    cout << pa.first << " " << pa.second << endl;
  }
  return 0;
}