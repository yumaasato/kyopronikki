#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int takahashi = 0, aoki = 0;
    for (int k = 0; k < x; ++k) {
        if (k % (a + c) < a) {
            takahashi += b;
        }
        if (k % (d + f) < d) {
            aoki += e;
        }
    }
    if (takahashi > aoki) {
        cout << "Takahashi\n";
    } else if (takahashi < aoki) {
        cout << "Aoki\n";
    } else {
        cout << "Draw\n";
    }
    return 0;
}
