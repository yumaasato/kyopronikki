#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int a = 11,b = -1,c = 11,d = -1;
  char s[11][11];
  rep(i,0,10)rep(j,0,10) cin >> s[i][j];

  rep(i,0,10)rep(j,0,10) {
    if(s[i][j] == '#') {
      a = min(a,i);
      b = max(b,i);
      c = min(c,j);
      d = max(d,j);
    }
  }
  a++; b++; c++; d++;
  cout << a << ' ' << b << endl;
  cout << c << ' ' << d << endl;
}