#include <iostream>
using namespace std;

int main(void) {
  int a, b, c, x;

  cin >> a;

  for (int i = 0; i < 3; i++) {
    sum += a % 10;
    a /= 10;
  }

  cout << x << endl;

  return 0;
}