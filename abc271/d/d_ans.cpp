#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    vector<bitset<10001>> dp(n+1);
    dp[0][0] = 1;
    for (int i = 0; i < n; ++i) {
        dp[i+1] = dp[i]<<a[i] | dp[i]<<b[i];
    }
    if (!dp[n][s]) {
        cout << "No" << endl;
        return 0;
        }
    string ans;
    for(int i = n-1; i >= 0; i--) {
        if(dp[i][s-a[i]]) {
            s -= a[i];
            ans += 'H';
        } else {
            s -= b[i];
            ans += 'T';
        }
    }
    reverse(b.begin(), b.end());
    cout << "Yes" << endl;
    cout << ans << endl;
    return 0;
}