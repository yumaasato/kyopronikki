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
  int ans = 0;

  rep(i,n) {
    int s; cin >> s;
    bool flag = false;
    rrep(a,1,1000)rrep(b,1,1000) {
      if(4*a*b + 3*a + 3*b == s) {
        flag = true;
      }
    }
    if(!flag) ans++;
  }
  cout << ans << endl;
  return 0;
}