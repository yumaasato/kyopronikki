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
  int n,q; cin >> n >> q;
  vector<vector<int> > a(n);
  rep(i,n) {
    int l; cin >> l;
    a[i] = vector<int>(l);
    rep(j,l) {
      cin >> a[i][j];
    }
  }

  rep(i,q) {
    int s,t; cin >> s >> t;
    cout << a[s-1][t-1] << endl;
  }
  return 0;
}