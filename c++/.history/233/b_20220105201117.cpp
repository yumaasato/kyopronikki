#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  int l,r;
  string s;
  /* 入力 */
  cin >> l >> r;
  cin >> s;

  int x = l-1;
  int y = s.size() -r;

  reverse(s.begin() + x ,s.end() - y);

  cout << s << endl;
  return 0;
}