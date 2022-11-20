#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  deque<int> l,r;
  rep(i,n) {
    if(s[i] == 'L') r.push_front(i);
    else l.push_back(i);
  }

  while(!l.empty()) {
    cout << l.front() << " ";
    l.pop_front();
  }
  cout << n << " ";
  while(!r.empty()) {
    cout << r.front() << " ";
    r.pop_front();
  }
  cout << endl;
  return 0;
}