#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<int> d(n);

  for(int i = 0; i < n; i++) cin >> d[i];
  set<int> value; // 要素の重複がない配列

  for(int i = 0; i < n; i++) value.insert(d[i]);

  cout << value.size() << endl;
}