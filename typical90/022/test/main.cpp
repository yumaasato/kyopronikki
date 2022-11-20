#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }

int main() {
  ll a,b,c;
  cin >> a >> b >> c;

  // 最小公約数
  ll d = gcd(a,gcd(b,c));
  // 最小公約数になるように切ればいい
  ll ans = (a/d) -1 + (b/d) -1 + (c/d) - 1;
  cout << ans << endl;
}