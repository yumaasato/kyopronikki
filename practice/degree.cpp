#include <bits/stdc++.h>
using namespace std;

int main() {
    // degree -> radian
    double target_degree = 45;
    double radian = target_degree * M_PI / 180.0;
    cout << radian << endl;

    // radian -> degree
    double degree = radian * 180.0 / M_PI;
    cout << degree << endl;
}