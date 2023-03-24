#include <bits/stdc++.h>
using namespace std;
#define rrep(i,a,n) for (int i = a; i <= n; ++i)
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  int j = s.size();
  if(j != 8) {
    cout << "No" << endl;
    return 0;
  }
  if(!isupper(s[7]) || !isupper(s[0])) {
    cout << "No" << endl;
    return 0;
  }
  rrep(i,1,6) {
    if(!isdigit(s[i])) {
      cout << "No" << endl;
      return 0;
    }
  }
  if(s[1] == '0') {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}