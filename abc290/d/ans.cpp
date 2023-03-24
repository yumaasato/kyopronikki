#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        --k;
        int a = n / gcd(n, d);
        cout << (long long) d * k % n + k / a << '\n';
    }
}
