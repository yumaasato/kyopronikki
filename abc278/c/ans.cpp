#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

int main() {
  int n, q;
  cin >> n >> q;
  set<P> st;
  rep(qi,q) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) st.emplace(a,b);
    if (t == 2) st.erase(P(a,b));
    if (t == 3) {
      if (st.count(P(a,b)) && st.count(P(b,a))) {
        cout << "Yes" << '\n';
      } else {
        cout << "No" << '\n';
      }
    }
  }
  return 0;
}