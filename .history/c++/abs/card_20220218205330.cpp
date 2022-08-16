#include<iostream>
#include<algorithm>
#include<vector>
static const int N = 100;
using namespace std;

int main(void) {
  int n, a, sum;
  int p1 = 0, p2 = 0;
  int maxb = 0, flag = 1;
  vector<int> v;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }

  sort

  while (!v.empty()) {
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