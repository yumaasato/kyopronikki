#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<int> cut;
  cut.push_back(0);
  int sum = 0;
  rep(i,n) {
    sum += a[i];
    cut.push_back(sum%360);
  }
  cut.push_back(360);
  sort(cut.begin(), cut.end());
  int ans = 0;
  rep(i,n+1) {
    int now = cut[i+1] - cut[i];
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}