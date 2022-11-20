#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<string> S(n);
  rep(i,n) cin >> S[i];
  int ans = 0;
  rep(s,1<<n) {
    map<char,int> cnt;
    rep(i,n) {
      if (s>>i&1) {
        for (char c : S[i]) cnt[c]++;
      }
    }
    int now = 0;
    for (auto p : cnt) if (p.second == k) ++now;
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}