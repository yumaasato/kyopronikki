#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>());

  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) ans += a[i];
    else ans -= a[i];
  }
    cout << ans << endl;
}