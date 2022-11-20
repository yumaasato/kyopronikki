#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const ll inf = 1e9;
int n;

int lis(const vector<int>& a) {
  vector<int> dp(n);
  vector<int> l(n);
  int len = 0;
  rep(i,0,n) {
    int pos = lower_bound(l.begin(),l.begin()+len,a[i]) - dp.begin();
    dp[i] = pos;
    l[dp[i]] = a[i];
    if(dp[i] > len) len += 1;
  }
  return len;
}

int main() {
  cin >> n;
  vector<pair<int,int>> ab(n);
  rep(i,0,n) cin >> ab[i].first;
  rep(i,0,n) cin >> ab[i].second;

  sort(all(ab));
  vector<int> b(n);
  rep(i,0,n) b[i] = ab[i].second;

  int ans = n+lis(b);
  cout << ans << endl;
}