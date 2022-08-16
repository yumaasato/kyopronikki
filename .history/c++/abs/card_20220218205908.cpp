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
  /* 降順 */
  sort(v.begin(), v.end(), greater<>());

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) p1 += v[i];
    else p2 += v[i];
  }
  maxb = p1 - p2;
  cout << maxb << endl;

  return 0;
}