#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool> > d(n, vector<bool>(n));
    rep(mi,m) {
    int k;
    cin >> k;
    vector<int> x(k);
    rep(i,k) cin >> x[i];
    rep(i,k) x[i]--;
    rep(i,k)rep(j,k) d[x[i]][x[j]] = true;
    }
    rep(i,n)rep(j,n) if (!d[i][j]) {
    cout << "No" << endl;
    return 0;
    }
    cout << "Yes" << endl;
    return 0;
}