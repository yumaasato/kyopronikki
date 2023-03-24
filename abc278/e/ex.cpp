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
#define rrep(i,a,b) for(int i=a;i<=b;i++)

int main() {
  int H,W,n,h,w; cin >> H >> W >> n >> h >> w;

  vector<int> minX(n,H+1);
  vector<int> maxX(n,0);
  vector<int> minY(n,W+1);
  vector<int> maxY(n,0);

  rrep(i,1,H) {
    rrep(j,1,W) { //0→nまでのmin,maxを求める
      int a; cin >> a;
      a--;
      minX[a] = min(minX[a],i);
      maxX[a] = max(maxX[a],i);
      minY[a] = min(minY[a],j);
      maxY[a] = max(maxY[a],j);
    }
  }

  rrep(i,0,H-h) {
    rrep(j,0,W-w) {
      int k = i+h, l = j + w, ans = n;
      rep(a,n) {
        if(i < minX[a] and maxX[a] <= k and j < minY[a] and maxY[a] <= l) {
          ans--;
        }
      }
      if(j >= 1) cout << " ";
      cout << ans;
    }
    cout << "\n";
  }

  return 0;
}