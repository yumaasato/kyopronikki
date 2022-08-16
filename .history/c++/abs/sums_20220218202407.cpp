#include <iostream>
using namespace std;

int main(void) {
  int n, a, b;
  int sum = 0;

  cin >> n >> a >> b;
  for (int i = 1; i <= n; i++) {
    int s = 0;
    int k = i;
    if (k >= 10) {
      s +=  10
    }
    if (s >= a && s <= b) sum += s;
  }

  cout << sum << endl;

  return 0;
}