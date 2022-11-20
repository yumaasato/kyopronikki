#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
const long long INF = 1LL<<60;
typedef long long ll;

int main() {
  int q; cin >> q;
  vector<ll> x(q);
  vector<int> t(q);

  rep(i,0,q) cin >> t[i] >> x[i];

  deque<ll> xt;
  rep(i,0,q) {
    if(t[i] == 1) xt.push_front(x[i]);
    else if(t[i] == 2) xt.push_back(x[i]);
    else cout << xt[x[i]-1] << endl;
  }
}