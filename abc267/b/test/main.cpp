#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
  string s; cin >> s;
  if(s[0] == '1') {
    cout << "No" << endl;
    return 0;
  }
  vector<int> re(7);
  re[0] = (s[6] == '1');
  re[1] = (s[3] == '1');
  re[2] = (s[7] == '1' || s[1] == '1');
  re[3] = (s[4] == '1');
  re[4] = (s[8] == '1' || s[2] == '1');
  re[5] = (s[5] == '1');
  re[6] = (s[9] == '1');

  bool flag = false;
  rep(i,0,5)rep(j,i+2,7) {
    if(re[i] != 1 || re[j] != 1) continue;
    rep(k,i+1,j) {
      if(re[k] == 1) break;
      if(k == j-1) flag = true;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}