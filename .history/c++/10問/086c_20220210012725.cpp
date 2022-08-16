#include <iostream>
#include <cstdlib>
static const int N = 100000;
using namespace std;

int main() {
  int n, T[N+1], X[N+1], Y[N+1];
  cin >> n;
  T[0] = 0, X[0] = 0, Y[0] = 0;
  for (int i = 0; i < n; i++) cin >> T[i+1] >> X[i+1] >> Y[i+1];

  bool can = true;
  for (int i = 0; i < n; i++) {
    int dt = T[i+1] - T[i];
    int dist = abs(X[i+1] - X[i]) + abs(Y[i+1] - Y[i]);
    if (dt < dist) can = false;
    if (dist % 2 != dt % 2) can = false;
  }

  if (can) cout << 'Yes' << endl;
  else c
  return 0;
}