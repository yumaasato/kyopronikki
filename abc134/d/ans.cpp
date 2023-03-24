#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<int> x(n+1, 0);
    for (int i = n; i >= 1; --i) {
        int sum = a[i];
        for (int j = i*2; j <= n; j += i) sum += x[j];
        x[i] = sum % 2;
    }
    vector<int> res;
    for (int i = 1; i <= n; ++i) if (x[i] == 1) res.push_back(i);
    cout << res.size();
    if(res.size() != 0) cout << endl;
    for (auto v: res) cout << v << " ";
    cout << endl;
}