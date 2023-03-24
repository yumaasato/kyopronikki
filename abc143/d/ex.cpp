#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAX = 2100;

int main() {
    long long res = 0;
    int N; cin >> N;
    vector<long long> L(N);
    for (int i = 0; i < N; ++i) cin >> L[i];

    // C, S
    vector<long long> C(MAX, 0), S(MAX+1, 0);
    for (int i = 0; i < N; ++i) C[L[i]]++;
    for (int x = 0; x < MAX; ++x) S[x+1] = S[x] + C[x]; // 累積和

    // a と b を固定
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) continue; // 同じものは選ばない

            // c の満たすべき値の区間を [left, right) で表す
            int left = abs(L[i] - L[j]) + 1;
            int right = L[i] + L[j];

            // 累積和で個数を求める
            int count = S[right] - S[left];
            if (left <= L[i] && L[i] < right) --count;
            if (left <= L[j] && L[j] < right) --count;

            res += max(count, 0);
        }
    }
    cout << res/6 << endl;
}
