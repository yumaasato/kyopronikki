#include <iostream>

using namespace std;

int main(void) {
  int x,y, ans = 0;
  cin >> x >> y;

  for (int i = 1; x < y; i++) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}