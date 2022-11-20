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
  int n; cin >> n;
  vector<vector<ll> > a(n,vector<ll>(n));
  rep(i,n) {
    rep(j,n) {
      cin >> a[i][j]; // 1行に入力を取れなくなる(i*j回入力する必要がある)
    }
  }

  rep(i,n) {
    rep(j,n) {
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}