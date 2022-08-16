#include <iostream>
using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;

  if ((a * b)%2 == 0) cout << "Even" << endl;
  else cout << "Odd" << endl;

  return 0;
}