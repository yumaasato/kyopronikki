#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int h1, w1, h2, w2;

  cin >> h1 >> w1;
  vector<vector<int>> a(h1, vector<int>(w1));

  for(int i = 0; i < h1; i++) for(int j = 0; j < w1; j++) cin >> a.at(i).at(j);


  cin >> h2 >> w2;
  vector<vector<int>> b(h2, vector<int>(w2));

  for(int i = 0; i < h2; i++) for(int j = 0; j < w2; j++) cin >> b.at(i).at(j);
  vector<int> c, d;

  for(int i = 0; i < (1<<h1); i++) {
    for(int j = 0; j < (1<<w1); j++) {

      for(int k = 0; k < h1; k++) if((i & (1<<(k-1))) == 0) c.push_back(k);
      for(int k = 0; k < w1; k++) if((j & (1<<(k-1))) == 0) d.push_back(k);
      if(c.size() != h2 || d.size() != w2) continue;

      bool flag = true;
      for(int k = 0; k < h2; k++) {
        for(int l = 0; l < w2; l++) {
          if(a[c[k]][d[l]] != b[k][l]) {
            match = false;
            break;
          }
        }

      }

    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}