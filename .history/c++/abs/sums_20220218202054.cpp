#include <iostream>
using namespace std;

int main(void) {
  int n, a, b;
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    int s = 0;
    while (s != 0) {
      s += i % 10;
      s /= 10;
    }

  }



  cout << sum << endl;

  return 0;
}