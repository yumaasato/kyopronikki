#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int h1, w1, h2, w2;

  cin >> h1 >> w1;
  for(int i = 0; i < h1; i++) {
    for(int j = 0; j < w1; j++) {
      cin >> a.at(i).at(j);
    }
  }
  vector<vector<int>> a(h1, vector<int>(w1));
  vector<vector<int>> b(h2, vector<int>(h1));

  cin >> h2 >> w2;
  for(int i = 0; i < h2; i++) {
    for(int j = 0; j < w2; j++) {
      cin >> b.at(i).at(j);
    }
  }

  bool flag;

  if(a == b) flag == true;

  vector<vector<int>> c(h1, vector<int>(h2));

  // 任意の行を削除
  for(int i = 0; i < h1; i++) {
    for(int j = 0; j < w1; j++) {
        if(i == j) continue;
        c[i] = a[j];
    }
    if (c == b) flag == true;
  }

  // 任意の列を削除
  for(int i = 0; i < h1; i++) {
    for(int j = 0; j < w1; j++) {
        if(i == j) continue;
        c[i][j] = a[i][j];
    }
    if (c == b) flag == true;
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}