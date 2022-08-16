#include <iostream>
using namespace std;

int main(void) {
  int n, a, b;
  int sum = 0;

  cin >> n >> a >> b;

  for (int i = 1; i <= n; i++) {
    int s = 0;
    int k = i;
    while (k != 0) {
      s += k % 10;
      k /= 10;
    }
    if (s >= a && s <= b) sum += i;
  }

  cout << sum << endl;

  return 0;
}