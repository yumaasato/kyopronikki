#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  ll a,b,c; cin >> a >> b >> c;
  ll sum = 2*b - a - c;
  ll k = (sum >= 0 ? : (1-sum)/2);
  ll ans = sum + 3 * k;
  cout << ans << endl;
}