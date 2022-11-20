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
  int q; cin >> q;
  deque<P> s;

  rep(i,q) {
    int t; cin >> t;
    if(t == 1) {
      int x,c; cin >> x >> c;
      s.push_back(make_pair(x,c));
    } else {
      int c; cin >> c;
      ll sum = 0;
      while(c > 0) {
      auto [a,b] = s.front();
      if(c >= b) {
        sum += (ll)a*b;
        s.pop_front();
        c -= b;
      } else {
          sum += (ll)a*c;
          s.pop_front();
          s.push_front(make_pair(a,b-c));
          c = 0;
        }
      }
      cout << sum << endl;
    }
  }
  return 0;
}