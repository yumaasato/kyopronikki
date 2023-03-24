#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(ll i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

int main() {
  ll x; cin >> x;

  rrep(a,-200,200) {
    rrep(b,-200,200) {
      ll A = a*a*a*a*a;
      ll B = b*b*b*b*b;
      if(A - B == x) {
        cout << a << " " << b << endl;
        return 0;
      }
    }
  }
  return 0;
}