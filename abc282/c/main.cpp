#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int k = s.size();
  int cnt = 0;

  rep(i,k) {
    if(s[i] == '"') cnt++;
    if(cnt % 2 == 0) {
      if(s[i] == ',') s[i] = '.';
    }
  }

  cout << s << endl;
  return 0;
}