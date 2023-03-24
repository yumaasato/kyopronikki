#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
  int n; cin >> n;
  vector<string> s(n);
  vector<int> t(n);

  rep(i,0,n) cin >> s[i] >> t[i];

  set<string> o;
  int index = 0; int ans = 0;
  rep(i,0,n) {
    if(o.count(s[i]) == 0) {
      o.insert(s[i]);
    } else {
      continue;
    }
    if(t[i] > ans) {
      ans = t[i];
      index = i+1;
    }
  }
  cout << index << endl;
}