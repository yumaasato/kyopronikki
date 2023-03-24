#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

int main() {
  int n,m; cin >> n >> m;
  vector<string> s(n);
  rep(i,n) cin >> s[i];

  int cnt = 0;
  rep(i,n)rrep(j,i+1,n-1) {
    bool f = true;
    rep(k,m) {
      if(s[i][k] == 'x' && s[j][k] == 'x') {
        f = false;
        break;
      }
    }
    if(f) cnt++;
  }
  cout << cnt << endl;
  return 0;
}