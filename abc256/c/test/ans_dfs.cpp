#include <iostream>
using namespace std;
int h[3], w[3], a[3][3];
long long ans = 0;
void dfs(int ij) {
  int i = ij / 3, j = ij % 3;
  if (i == 3) {
    ans++;
    return;
  }
  if (i == 2) {
    int x = w[j] - a[0][j] - a[1][j];
    if (x <= 0) return;
    a[i][j] = x, dfs(ij + 1);
  } else if (j == 2) {
    int x = h[i] - a[i][0] - a[i][1];
    if (x <= 0) return;
    a[i][j] = x, dfs(ij + 1);
  } else {
    for (int x = 1; x <= 30; x++) a[i][j] = x, dfs(ij + 1);
  }
}
int main() {
  for (int i = 0; i < 3; i++) cin >> h[i];
  for (int j = 0; j < 3; j++) cin >> w[j];
  if (h[0] + h[1] + h[2] != w[0] + w[1] + w[2]) {
    cout << 0 << "\n";
    return 0;
  }
  dfs(0);
  cout << ans << "\n";
}
