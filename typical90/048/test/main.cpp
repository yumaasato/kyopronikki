#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n; ll k; cin >> n >> k;

  vector<int> s;
  rep(i,0,n)  {
    int a,b; cin >> a >> b;
    s.push_back(b);
    s.push_back(a-b);
  }

  sort(s.begin(), s.end(), greater<int>());
  ll ans = 0;
  rep(i,0,k) ans += (ll)s[i];

  cout << ans << endl;
  }