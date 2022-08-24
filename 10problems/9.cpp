#include<bits/stdc++.h>
using namespace std;

int main(void) {
  string div[5] = {"dream", "dreamer", "erase", "eraser"};
  string s;
  cin >> s;
  reverse(s.begin(), s.end()); // 全ての文字列を左右反転する

  bool flag = true;
  for(int i = 0; i < s.size();) {
    bool flag2 = false; // 4個の文字列たちどれかでdevideできるか
    for (int j = 0; j < 4; j++) {
      string d = div[j];
      if (s.substr(i, d.size()) == d){ // dの要素があれば
        flag2 = true;
        i += d.size(); // divideできたらiを進める
      }
    }
    if(!flag2) {
      flag = false;
      break;
    }
  }

  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}