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
// const ll INF = 1000000000000000000LL;
using mint = modint1000000007;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  int n,m; cin >> n >> m;
  vector<int> to[200090];
  vector<int> dist(200090,inf), p(200090);

  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  queue<int> q;
  dist[0] = 0; q.push(0);
  vector<int> vs;
  while(!q.empty()) {
    int pos = q.front(); q.pop();
    vs.push_back(pos);
    for(auto u : to[pos]) {
      if(dist[u] != inf) continue;
      dist[u] = dist[pos] + 1;
      q.push(u);
    }
  }

  vector<mint> num(n);
  num[0] = 1;
  for(int v : vs) {
    for(int u : to[v]) {
      if(dist[u] == dist[v] + 1) {
        num[u] += num[v];
      }
    }
  }
  mint ans = num[n-1];
  cout << ans.val() << endl;
  return 0;
}