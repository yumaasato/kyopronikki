#include <iostream>
using namespace std;

int main() {
  int n, res10000, res5000, res1000;
  int y;
  cin >> n >> y;
  int a = -1, b = -1, c = -1;

  for (a = 0; a <= n; a++) {
    for(b = 0; b <= n; b++) {
      c = (n - (10000 * a + 5000 * b)) / 1000;
      if (y == 10000 * a + 5000 * b + 1000 * c) {
        res10000 = a;
        res5000 = b;
        res1000 = c;
      }
    }
  }
  cout << res10000  <<" "<< res5000 <<" "<< res1000 << endl;

}
using namespace std;