#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int a = 11,b = -11,c = 11,d = -11;
  string s[10];
  rep(i,0,10) cin >> s[i];

  rep(i,0,10)rep(j,0,10) {
    if(s[i][j] == '#') {
      a = min(a,i+1);
      b = max(b,i+1);
      c = min(c,j+1);
      d = max(d,j+1);
    }
  }
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
}