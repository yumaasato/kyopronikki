#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<int> a(3);
  rep(i,0,3) cin >> a[i];

  sort(a.begin(), a.end());

  int ans = 10000;

  rep(i,0,10000) {
    rep(j,0,10000-i) {
      int k = (n - a[0]*i - a[1]*j)/a[2];
      if(a[0]*i+a[1]*j+a[2]*k == n && i+j+k < 10000) {
        ans = min(ans,i+j+k);
      }
    }
  }
  cout << ans << endl;
}