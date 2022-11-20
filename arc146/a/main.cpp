#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  ll n; cin >> n;
  vector<ll> a(n+1);
  rep(i,0,n) cin >> a[i];
  sort(a.begin(),a.end(), greater<ll>());

  ll ans = 0;
  vector<ll> c;

  rep(i,0,3) c.push_back(a[i]);
  sort(c.begin(),c.end());

  do {
    string cnt = "";
    rep(i,0,3) {
      cnt += to_string(c[i]);
    }
    ans = max(ans,stoll(cnt));
  } while(next_permutation(c.begin(),c.end()));
  cout << ans << endl;
}