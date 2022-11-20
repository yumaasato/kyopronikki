#include <bits/stdc++.h>
using namespace std;

int main(void) {
  double x,y;

  cin >> x >> y;
  double sum = sqrt(x*x + y*y);

  x /= sum; y /= sum;
  cout << x  << " " << y << endl;
  return 0;
}