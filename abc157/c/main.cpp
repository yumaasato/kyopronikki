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
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

int main() {
  int n,m; cin >> n >> m;
  vector<int> f(n);
  vector<bool> ok(n);

  rep(i,m) {
    int s,c; cin >> s >> c;
    s--;
    if(n != 1) {
      if(s == 0 && c == 0) {
        cout << -1 << endl;
        return 0;
      }
      if(ok[s] == true) {
        if(f[s] != c) {
          cout << -1 << endl;
          return 0;
        }
        continue;
      }
      f[s] = c;
      ok[s] = true;
    } else {
      if(ok[s] == true) {
        if(c != f[s]) {
          cout << -1 << endl;
          return 0;
        }
        continue;
      }
      f[s] = c;
      ok[s] = true;
    }
  }
  rep(i,n) {
    if(n != 1) {
      if(i==0 && f[i]==0) {
        cout << 1;
        continue;
      }
      cout << f[i];
    } else {
      cout << f[i];
    }
  }
  cout << endl;
  return 0;
}