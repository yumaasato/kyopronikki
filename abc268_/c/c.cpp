#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<int> p(n);
  re(i,n) {
    cin >> p[i];
  }

  int ans = 0;
  vector<int> cnt(n);

  re(i,n) {
    re(j,3) {
      cnt[(p[i]-1-i+j+n)%n]++;
    }
  }
  re(i,n) {
    ans = max(ans,cnt[i]);
  }
  cout << ans << endl;
}