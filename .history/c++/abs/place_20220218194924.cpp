#include <iostream>
using namespace std;

int main(void) {
  int a, sum;

  cin >> a;

  for (int i = 0; i < 3; i++) {
    sum +=  % 10;
    a /= 10;
  }

  return 0;
}