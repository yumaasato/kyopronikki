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
  ll ans = 0;
  re(i,n) {
    ll a,b; cin >> a >> b;
    ans += b*(b+1)/2 - a*(a-1)/2;
  }
  cout << ans << endl;
}