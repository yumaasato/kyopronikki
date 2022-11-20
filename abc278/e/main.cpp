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
  int H,W,n,h,w; cin >> H >> W >> n >> h >> w;
  vector<vector<int> > a(H+1,vector<int>(W+1));
  vector sum(max_num, vector(H + 1, vector<ll>(W + 1)));
  set<int> st;
  set<int> e;

  rrep(i,1,H)rrep(j,1,W) {
    cin >> a[i][j];
    st.insert(a[i][j]);
  }
  rrep(k,0,H-h) {
    rrep(l,0,W-w) {
      rrep(i,k,k+h)rrep(j,l,l+w) {
        e.insert(a[i][j]);
      }
    if(e.size() == 0) {
      cout << st.size() << " ";
    } else {

    cout << st.size() - e.size() << " ";
    }
    }
    cout << endl;
  }

  return 0;
}