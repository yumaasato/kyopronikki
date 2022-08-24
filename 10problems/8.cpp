#include <bits/stdc++.h>
using namespace std;

int main(void) {

  int a, b ,c, n,y;
  a = -1, b = -1, c = -1;
  cin >> n >> y;

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      int k = n-(i+j);
    if (y == 10000*i+5000*j+1000*k) {
      a = i, b = j, c = k;
      break;
      }
    }
  }

  cout << a << " " << b << " " << c << endl;
}