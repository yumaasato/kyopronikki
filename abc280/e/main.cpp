#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using mint = modint998244353;
using P = pair<int, int>;

int main() {
  int n,p; cin >> n >> p;
  vector dp(n+1,mint(0));
  mint critical = mint(p) / 100, normal = 1 - critical;
  rrep(i,1,n) {
    dp[i] = (dp[max(0,i-2)]*critical + dp[i-1]*normal) + 1;
  }
    cout << dp.back().val() << endl;
  return 0;
}