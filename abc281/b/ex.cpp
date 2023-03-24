#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  string st = "";
  bool f = true;
  int num = 0;
  int j = s.size();
  rrep(i,1,j-2) {
    st = st + s[i];
  }

  if(j != 8) {
    f = false;
  }
  rep(i,j) {
    if((i == 0 || i == j-1) && !isupper(s[i])) {
      f = false;
      break;
    }

    if(i != 0 && i != j-1 && isupper(s[i])) {
      f = false;
      break;
      // st += s[i];
      // char c = s[i];
      // int a = c - '0';
      // num = num*10 + a;
    }
    if(i == j-1) {
      if(stoi(st) < 100000 || stoi(st) > 999999) {
        // cout << stoi(st) << endl;
        f = false;
        break;
      }
    }

  }

  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}