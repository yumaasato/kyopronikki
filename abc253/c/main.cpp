#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int q; cin >> q;
  set<int> s;
  map<int,int> cnt;
  rep(i,0,q) {
    int t; cin >> t;
    if(t == 1) {
      int x; cin >> x;
      s.insert(x);
      cnt[x]++;
    } else if(t==2) {
      int x,c; cin >> x >> c;
      if(c >= cnt[x]) {
        s.erase(x);
        cnt[x] = 0;
      } else {
        cnt[x] -= c;
      }
    } else {
      cout << *s.rbegin() - *s.begin() << endl;
    }
  }
}