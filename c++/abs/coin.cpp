#include <iostream>
using namespace std;

int main(void) {
  int a, b, c, x;
  int ans = 0;

  cin >> a >> b >> c >> x;

  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        if (x == 500 * i + 100 * j + 50 * k) ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}