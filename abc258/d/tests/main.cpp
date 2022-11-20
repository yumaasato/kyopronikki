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
  ll n,x; cin >> n >> x;
  vector<ll> a(n),b(n);
  vector<ll> s(n);
  rep(i,n) {
    cin >> a[i] >> b[i];
    if(i != 0)s[i] = s[i-1]+(a[i]+b[i]);
    else s[0] = a[0]+b[0];
  }
  ll ans = 0;
  priority_queue<ll, vector<ll>, greater<ll> > pq;
  rrep(i,0,n-1) {
    pq.push(b[i]);
    ll bmin = pq.top();
    ll num = s[i] + bmin*(x-i-1);
    if(i == 0) ans = s[0] + b[0]*(x-1);
    else ans = min(ans,num);
  }

  cout << ans << endl;
  return 0;
}