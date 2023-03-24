#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve() {
  string s;
  cin >> s;
  regex re("[A-Z][1-9][0-9]{5}[A-Z]");
  return regex_match(s, re);
}

int main() {
  if (solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}