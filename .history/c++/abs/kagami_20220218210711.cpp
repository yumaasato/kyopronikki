#include<iostream>
#include<algorithm>
#include<vector>
#include <functional>
static const int N = 100;
using namespace std;

int main(void) {
  int n, d[N];
  vector<int> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }
  /* 昇順 */
  sort(v.begin(), v.end(), greater<int>());

  for (int i = 0; i < n; i++) {
    int max = 0;
    
  }
  return 0;
}