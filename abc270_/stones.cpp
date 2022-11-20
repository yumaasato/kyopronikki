#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,k; cin >> n >> k;
  vector<int> a(n);
  rep(i,0,n) cin >> a[i];

  vector<bool> dp(100009);

  rep(i,0,k) {
    rep(j,0,n) {
      if(!dp[i]) dp[i+a[j]] = true;
    }
  }

  if(dp[k]) cout << "First" << endl;
  else cout << "Second" << endl;
}