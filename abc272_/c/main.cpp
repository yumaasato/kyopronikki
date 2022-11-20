#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int n; cin >> n;
  vector<int> a(n);

  vector<int> c;
  vector<int> d;

  int e = 0; int o = 0;
  rep(i,0,n) {
    cin >> a[i];
    if(a[i] % 2 == 0)  {
      e++;
      c.push_back(a[i]);
    }
    else {
    o++;
    d.push_back(a[i]);
    }
  }
  ll ans = -1e18;
  sort(c.begin(),c.end(),greater<int>());
  sort(d.begin(),d.end(),greater<int>());

  if(c.size() >= 2) {
    ans = max(ans, (ll)c[0]+c[1]);
  }
  if(d.size() >= 2) {
    ans = max(ans, (ll)d[0]+d[1]);
  }

  if(ans == -1e18) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

}