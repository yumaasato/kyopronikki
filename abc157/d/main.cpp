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

int main() {
  int n,m,k; cin >> n >> m >> k;
  dsu uf(n);
  vector<int> f(n), g[n];

  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    f[a]++; f[b]++;
    uf.merge(a,b);
  }

  rep(i,k) {
    int c,d; cin >> c >> d;
    c--; d--;
    g[c].push_back(d);
    g[d].push_back(c);
  }

  rep (i,n) {
    int ans = uf.size(i) - 1 - f[i];
    for(auto ex : g[i]) {
      if(uf.same(ex,i)) ans--;
    }
    if(i) cout << " ";
    cout << ans;
  }
  cout << endl;
  return 0;
}