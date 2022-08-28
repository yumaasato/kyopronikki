#include<bits/stdc++.h>
using namespace std;

int main(void) {
  string div[5] = {"dream", "dreamer", "erase", "eraser"};
  string s; 
  cin >> s;
  bool dp[100010]; dp[0] = 1;

  for(int i = 0; i < s.size(); i++) {
      if(!dp[i]) continue;
      for(string s : div){ // divの要素を一つずつ取り出してsに格納
        if(s.substr(i, s.size()) == s) {
          dp[i + s.size()] = 1;
        }
      }
  }
  cout << (dp[s.size()] ? "YES" : "NO") << endl;

}