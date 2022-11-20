#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N >= 42) N++;
  cout << "AGC";
  cout << setfill('0') << setw(3) << N;
  cout << endl;
}
