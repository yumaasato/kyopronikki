#include <iostream>
#include <algorithm>
static const int N = 100;
using namespace std;

int main(void) {
  int n, a, sum;
  int p1 = 0, p2 = 0;
  int maxb = 0, flag = 1;
  stack 

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  while (!) {
    if (flag) {
    p1 += max_element(A, A + n);
    flag = 0;
    }
    else {
      p2 += max_element(A, A+n);
      flag = 1;
    }
  }

  maxb = p1 - p2;
  cout << maxb << endl;

  return 0;
}