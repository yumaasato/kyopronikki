#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int a,b,c; cin >> a >> b >>c;
  if(c == 0) {
    while(1) {
      a--;
      if(a < 0)  {
        cout << "Aoki" << endl;
        exit(0);
      }
      b--;
      if(b < 0)  {
        cout << "Takahashi" << endl;
        exit(0);
      }
    }
  }
  else {
    while(1) {
      b--;
      if(b < 0)  {
        cout << "Takahashi" << endl;
        exit(0);
      }
      a--;
      if(a < 0)  {
        cout << "Aoki" << endl;
        exit(0);
      }
    }
  }
}