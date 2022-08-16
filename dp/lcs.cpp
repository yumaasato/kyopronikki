#include <bits/stdc++.h>
using namespace std;
static const int n = 1000;

int lcs(string x, string y) {
  int c[n+1][n+1];
  int m = x.size();
  int n = y.size();

  int maxlcs = 0;

  for(int i = 0; i <= m; i++) c[i][0] = 0;
  for(int j = 1; i <= n; j++) c[0][j] = 0;

  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if(x[i] == y[j]) {
        c[i][j] = c[i-1][j-1] + 1;
        else {
          c[i][j] = max(c[i-1][j], c[i][j-1]);
        }
        maxlcs = max(maxlcs, c[i][j])
      }
    }
  }

}


int main() {
  string s1, s2;
  int n; cin >> n;

}