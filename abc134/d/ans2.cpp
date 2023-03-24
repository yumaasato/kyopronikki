#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1);
  rep(i,n) cin >> a[i+1];
  vector<int> b(n+1);
  for (int i = n; i >= 1; --i) {
    int sum = 0;
    for (int j = i+i; j <= n; j += i) {
      sum ^= b[j];
    }
    b[i] = sum^a[i];
  }
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    if (b[i]) ans.push_back(i);
  }
  cout << ans.size() << endl;
  rep(i,ans.size()) {
    printf("%d%c", ans[i], i+1==ans.size()?'\n':' ');
  }
  return 0;
}