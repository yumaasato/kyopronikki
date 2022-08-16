#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> x(3), y(3);

  for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];

  cout << (x[0] ^ x[1] ^ x[2]) << " " << (y[0] ^ y[1] ^ y[2]) << endl;
  return 0;
}