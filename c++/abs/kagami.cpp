#include<iostream>
#include<algorithm>
#include<vector>
#include <functional>
static const int N = 100;
static const int INF = (1 << 21);
using namespace std;

int main(void) {
  int n, sum = 0;
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end(), greater<int>());

  for (int i = 1; i <= n; i++) {
    if (v[i] != v[i-1]) sum++;
  }

  cout << sum << endl;
  return 0;
}