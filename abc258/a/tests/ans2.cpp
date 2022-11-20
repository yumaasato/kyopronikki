#include <iostream>
#include <string>
using namespace std;

string fix(int x) {
  if (x < 10) {
    // 0埋め
    return string{'0'} + to_string(x);
  } else {
    return to_string(x);
  }
}

int main() {
  int X;
  cin >> X;
  int H = X < 60 ? 21 : 22;
  int M = X % 60;
  cout << H << ':' << fix(M) << '\n';
}
