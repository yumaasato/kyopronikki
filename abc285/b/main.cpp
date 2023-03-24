#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

int main() {
  int n; cin >> n;
  string s; cin >> s;

  rrep(i,1,n-1) {
    rep(l,n) {
      if(i+l>= n) {
        cout << l << endl;
        break;
      }
      if(s[l] != s[i+l]) continue;
      else {
        cout << l << endl;
        break;
      }
    }
  }
  return 0;
}