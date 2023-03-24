#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  rep(i,n) cin >> s[i] >> t[i];

  vector<bool> orig(n);
  set<string> st;
  rep(i,n) {
    // 被りでも最初に出された作品はオリジナルな作品とみなす
    if (st.count(s[i]) == 0) orig[i] = true;
    st.insert(s[i]);
  }

  int score = -1, ans = -1;
  rep(i,n) {
    if (!orig[i]) continue;
    if (score < t[i]) {
      score = t[i];
      ans = i+1;
    }
  }
  cout << ans << endl;
  return 0;
}