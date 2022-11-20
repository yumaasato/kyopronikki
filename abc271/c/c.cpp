#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n; cin >> n;
  set<int> s;
  rrep(i,1,n) {
    int m; cin >> m;
    s.insert(m);
  }

  int b = n;
  int ans = 0;

  int i = 1;
  while(true) {
    if(b <= 0) break;
    if(s.count(i) == 1) {
      ans++;
      b--;
    }
    else {
      if(b >= 2) {
        ans++;
        b -= 2;
      }
      else break;
    }
    i++;
  }
  cout << ans << endl;
}