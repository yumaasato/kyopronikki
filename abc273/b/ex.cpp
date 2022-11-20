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
  ll x, k; cin >> x >> k;
  ll pow10 = 1;
  rep(i,0,k) {
    x /= pow10;
    int num = x % 10;
    if(num >= 5) {
      x += (10-num);
    } else {
      x -= num;
    }
    x *= pow10;
    pow10 *= 10;
  }
  cout << x << endl;
}