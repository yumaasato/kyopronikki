#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int l,r;
  string a = "atcoder";
  cin >> l >> r;

  for (int i = l - 1; i < r; i++) cout << a[i];
  cout << endl;
}