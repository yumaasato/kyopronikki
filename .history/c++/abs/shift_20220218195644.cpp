#include <iostream>
static const int N = 200;
using namespace std;

int main(void) {
  int n, A[N+1];
  int sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  while(1) {
  for (int i = 0; i < n; i++) {
      if (A[i] % 2 != 0) break;
      A[i] /= 2;
    }
  sum++;

  }

  cout << sum << endl

  return 0;
}