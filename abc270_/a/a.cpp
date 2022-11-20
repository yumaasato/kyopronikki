#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int a,b; cin >> a >> b;
  int ans = 7;
  if(a == 7 || b == 7) {
    cout << 7 << endl;
    exit(0);
  }
  if(a != 1 && b != 1 && a != 3 && b != 3 && a != 5 && b != 5) {
    ans--;
  }
  if(a != 2 && b != 2 && a != 3 && b != 3 && a != 6 && b != 6) ans -= 2;

  if(a != 4 && b != 4 && a != 5 && b != 5 && a != 6 && b != 6) ans -= 4;

  cout << ans << endl;

}