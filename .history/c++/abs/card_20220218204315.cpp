#include <iostream>
#include <algorithm>
static const int N = 100;
using namespace std;

int main(void) {
  int n, a, sum, A[N+1];
  int p1 = 0, p2 = 0;
  int maxb = 0, flag == 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  while (n--) {

    p1 += max_element(a, a + n);
  }

  cout << maxb << endl;

  return 0;
}