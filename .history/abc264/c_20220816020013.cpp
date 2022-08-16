#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int h1, w1, h2, w2;
  vector<vector<int>> a(h1, vector<int>(w1));
  vector<vector<int>> b(h2, vector<int>(w2));

  cin >> h1 >> w1;
  for(int i = 0; i < h1; i++) {
    for(int j = 0; j < h1; j++) {
      a.at(i).at(j);
    }
  }

  cin >> h2 >> w2;
  for(int i = 0; i < h2; i++) {
    for(int j = 0; j < h2; j++) {
      a.at(i).at(j);
    }
  }
  bool flag;

  if(a == b) flag == true;

  vector<vector<int>> a(h1, vector<int>(w1));
  for(int i = 0; i < h1; i++) {

  }

  for(int j = 0; j < h1; j++) {

  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}