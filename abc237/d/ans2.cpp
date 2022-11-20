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
  list<int> a{0};
  list<int>::iterator itr = a.end();
  rep(i,n) {
    if(s[i] == 'L') --itr;
    a.insert(itr,i+1);
  }
  int cnt = 0;
  for(int ax : a) {
    if(cnt >= 1) cout << " ";
    cout << ax;
    cnt++;
  }
  cout << endl;
  return 0;
}