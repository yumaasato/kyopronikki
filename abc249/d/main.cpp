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

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> s(200010);
  rep(i,n) {
    cin >> a[i];
    s[a[i]]++;
  }
  ll ans = 0;
  rrep(i,1,200010) {
    for(int j = 1; i*j <= 200010; j++) {
      ans += (ll) s[i]*s[j]*s[i*j];
    }
  }

  cout << ans << endl;
}