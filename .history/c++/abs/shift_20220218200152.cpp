#include <iostream>
static const int N = 200;
using namespace std;

int main(void) {
  int n, A[N+1];
  int sum = 0;
  int flag == 1;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  do {
  for (int i = 0; i < n; i++) {
      if (A[i] % 2 != 0) flag == 0;
      A[i] /= 2;
    }

    if (flag == 1) sum++;
  } while(flag == 1)

  cout << sum << endl;

  return 0;
}