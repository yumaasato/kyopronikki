#include <algorithm>
#include <iomanip>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <vector>
#include <climits>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
void chmax(ll & x, ll y) { x = max(x,y);}
void chmin(ll & x, ll y) { x = min(x,y);}
// const ll INF = 1000000000000000000LL;
const int mod = 1000000007;
using mint = modint1000000007;
using P = pair<int, int>;


int main() {
  string s; cin >> s;
  int n = s.size();
  vector dp(n+1,vector<mint>(9));
  dp[0][0] = 1;

  string t = "chokudai";
  rep(i,n){
    rep(j,9) {
      dp[i+1][j] += dp[i][j];
      if(j < 8 && s[i] == t[j]) {
        dp[i+1][j+1] += dp[i][j];
      }
    }
  }
  mint ans = dp[n][8];
  cout << ans.val() << endl;
  return 0;
}