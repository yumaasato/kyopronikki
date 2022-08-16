#include <iostream>
using namespace std;

int main(void) {
  int a, b, c;

  cin >> a;

  for (int i = 0; i < 3; i++) {
    sum += a % 10;
    a /= 10;
  }

  cout << sum << endl;

  return 0;
}