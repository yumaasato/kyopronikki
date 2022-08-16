#include <iostream>

using namespace std;

int main(void) {
  int x,y, ans = 0;
  cin >> x >> y;

  while (x < y) {
    x += 10;
    ans++;
  };
  
  cout << ans << endl;
  return 0;
}