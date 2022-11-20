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
  int n, m; cin >> n >> m;
  vector<int> a(n+1);
  vector<int> c(n+m+1);

  rrep(i,0,n) cin >> a[i];
  rrep(i,0,n+m) cin >> c[i];

  vector<int> b(m+1);
  for(int i = m; i >= 0; i--) {
    b[i] = c[i+n] / a[n];
  }

  return 0;
}