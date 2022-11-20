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
  string s; cin >> s;
  int n = s.size();

  int x = 0, y = 0;

  for(int i = 0; i < n; i++) {
    if(s[i] == 'a') x++;
    else break;
  }

  for(int i = n-1; i >= 0; i--) {
    if(s[i] == 'a') y++;
    else break;
  }

  if(x == n) {
    cout << "Yes" << endl;
    return 0;
  }

  if(x > y) {
    cout << "No" << endl;
    return 0;
  }

  for(int i = x; i < (n-y); i++) {
    if(s[i] != s[x+n-y-i-1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}