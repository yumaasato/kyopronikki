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
  string s[3],t[3];
  rep(i,0,3) cin >> s[i];
  rep(j,0,3) cin >> t[j];

  vector<int> a,b;
  rep(i,0,3) {
    b.push_back(i);
  }

  rep(i,0,3) {
    if(s[i] == t[0]) a.push_back(0);
    else if(s[i] == t[1]) a.push_back(1);
    else a.push_back(2);
  }
  int op = 0;
  bool flag = false;

  while(true) {
    rep(i,0,2) {
      if(a[i] > a[i+1]) {
        swap(a[i],a[i+1]);
        op++;
      }
    }
    rep(j,0,3) {
      if(a[j] != b[j]) break;
      if(j == 2) flag = true;
    }
    if(flag) break;
  }

  if(op % 2 != 0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}