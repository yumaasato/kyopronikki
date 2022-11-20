#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;
int n;

int flag(string s) {
  int cnt = 0;
    for(auto m: s) {
      if(m == '(') cnt++;
      else cnt--;
      if(cnt < 0) return 0;
    }
    if(cnt == 0) return 1;
    else return 0;
}

int main() {
  cin >> n;
  if(n % 2 != 0) exit(0);

  for(int bit = 0; bit < (1<<n); bit++) {
    string s = "";
    drep(i,n-1,0) {
      if(!(bit & (1<<i))) s += "(";
      else s += ")";
    }
    if(flag(s)) cout << s << endl;
  }
}