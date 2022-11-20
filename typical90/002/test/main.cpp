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

void para(int n) {
  for(int bit = 0; bit < (1<<n); bit++) {
    string s = " ";
    int con = 0;
    bool flag = true;
    for(int j = n-1; j >= 0; --j) {
      if(!(bit&(1<<j))) {
        s += "(";
        con++;
      } else {
        s += ")";
        con--;
      }
      if(con < 0) flag = false;
    }
    if(flag == false || con != 0) break;
    cout << s << endl;
  }
  return;
}

int main() {
  int n; cin >> n;
  para(n);
  return 0;
}