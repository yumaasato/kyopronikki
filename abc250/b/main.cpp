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
  int n,a,b; cin >> n >> a >> b;
  rep(i,0,a*n) {
    rep(j,0,b*n) {
      int n1 = i/a; int n2 = j/b;
      if((n1 + n2) % 2 == 0) cout << '.';
      else  cout << '#';
    }
    cout << endl;
  }
  return 0;
}