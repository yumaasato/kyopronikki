#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,m; cin >> h >> m;
  int a =  h / 10,b =  h % 10,c =  m / 10,d = m % 10;
  int n1 = 10*a + b, n2 = 10*c + d;

  while(true) {
    if((a < 2 && b < 6) || (a == 2 && c <= 3 && b < 6)) {
      cout << a << b << " " << c << d << endl;
      break;
    }
    n2++;
    if(n2 == 60) {
      n1++; n2 = 0;
      c = 0, d = 0;
    } else {
      c = n2 / 10;
      d = n2 % 10;
    }
    if(n1 == 24) {
      n2 = 0;
      a = 0, b = 0;
    } else {
      a = n1 / 10,b = n1 % 10;
    }
  }
  return 0;
}