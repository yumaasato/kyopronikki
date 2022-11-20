#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n; cin >> n;
  map<string,int> st;
  vector<string> s(n);
  vector<string> t(n);
  rep(i,0,n) {
    cin >> s[i] >> t[i];
    st[s[i]]++;
    st[t[i]]++;
  }

  bool flag = true;
  rep(i,0,n) {
    if(s[i] == t[i]) {
      if(st[s[i]] > 2) flag = false;
    }
    else {
      if(st[s[i]] > 1 && st[t[i]] > 1) {
        flag = false;
      }
    }
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}