#include <iostream>
using namespace std;

int main() {
  int n;
  int y;
  cin >> n >> y;
  int res10000 = -1, res5000 = -1, res1000 = -1;

  for (int a = 0; a <= n; a++) {
    for(int b = 0; b+a <= n; b++) {
      int c = n - (a + b);
      if (y == 10000 * a + 5000 * b + 1000 * c) {
        res10000 = a;
        res5000 = b;
        res1000 = c;
      }
    }
  }
  cout << res10000  <<" "<< res5000 <<" "<< res1000 << endl;
  return 0;
}
