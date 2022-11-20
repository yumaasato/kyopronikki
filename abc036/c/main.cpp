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
  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }
  vector<int> b = a;
  sort(all(b));

  b.erase(unique(all(b)), b.end());

  vector<int> res(a.size());
  rep(i,a.size()) {
    res[i] = lower_bound(b.begin(),b.end(), a[i]) - b.begin();
  }
  // for (auto v :res) cout << v << endl;
  rep(i,b.size()) {
    cout << b[i] << endl;
  }
  return 0;
}