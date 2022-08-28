#include <iostream>
using namespace std;

int main() {
    int n;
    int x[100010], y[100010], t[100010];
    cin >> n;
    t[0] = 0, x[0] = 0, y[0] = 0;

    for(int i = 0; i < n; i++) cin >> t[i+1] >> x[i+1] >> y[i+1];

    bool flag = true;
    for(int i = 0; i < n; i++) {
      int dt = t[i+1] - t[i];
      int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
      if (dt < dist) flag = false;
      if(dist % 2 != dt % 2) flag = false; // distとdtの偶奇は一致する必要がある
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}