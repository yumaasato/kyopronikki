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
  vector<double> l(n);
  vector<double> r(n);

  rep(i,n) {
    int t; cin >> t >> l[i] >> r[i];
    if(t == 1) {
      continue;
    }
    else if(t == 2) {
      r[i] -= 0.5;
    }
    else if(t == 3) {
      l[i] += 0.5;
    }
    else {
      l[i] += 0.5;
      r[i] -= 0.5;
    }
  }
  int ans = 0;

  rep(i,n) {
    rrep(j,i+1, n-1) {
      ans += (max(l[i],l[j]) <= min(r[i],r[j]));
    }
  }
  cout << ans << endl;
  return 0;
}