#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  const int di[] = {0, 1, 1, -1};
  const int dj[] = {1, 0, 1, 1};
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  rep(i,n)rep(j,n)rep(v,4) {
    int ni = i, nj = j;
    int cnt = 0;
    rep(k,6) {
      if (ni < 0 || nj < 0 || ni >= n || nj >= n) {
        cnt = 999;
        break;
      }
      if (s[ni][nj] == '.') cnt++;
      ni += di[v]; nj += dj[v];
    }
    if (cnt <= 2) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}