#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1000000007;

int main() {
  int n; cin >> n;

  vector<vector<int>> a(n,vector<int>(6));

  rep(i,0,n)rep(j,0,6) cin >> a[i][j];

  ll sum = 1;
  rep(i,0,n) {
  ll num = a[i][0] + a[i][1] + a[i][2] + a[i][3] + a[i][4] + a[i][5];
  sum = (sum * num) % inf;
  }
  cout << sum << endl;
}