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
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<ll> a(n+1);
  rrep(i,1,n) cin >> a[i];

  vector<ll> s(2*n+1);
  vector<ll> ans(2*n+2, 1e18);
  ans[1] = 0;

  rrep(i,1,n) {
    queue<ll> q;
    ll n1 = 2*i; ll n2 = 2*i + 1;
    if(n1 <= 2*n+1) q.push(n1);
    if(n2 <= 2*n+1) q.push(n2);

    while(!q.empty()) {
      ll num = q.front(); q.pop();
      if(ans[num] == 1e18) {
        ans[num] = ans[a[i]]+1;
      }
    }
  }
  rrep(i,1,2*n+1) cout << ans[i] << endl;
  return 0;
}