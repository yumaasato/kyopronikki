#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<char, int>;

int main() {
  string s;
  int k;
  cin >> s >> k;
  int n = s.size();

  vector<int> a(n);
  rep(i,n) a[i] = (s[i] == '.');

  int ans = 0;
  int sum = 0, r = 0;
  rep(i,n) {
    while(r < n && sum + a[r] <= k) {
      sum += a[r];
      ++r;
    }
    ans = max(ans, r-i);
    sum -= a[i];
  }
  cout << ans << endl;
  return 0;
}