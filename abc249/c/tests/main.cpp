#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
  int n,k; cin >> n >> k;
  vector<string> s(n);
  rep(i,0,n) cin >> s[i];
  int ans = 0;

  rep(bit,0,(1<<n)) {
    set<char> st; // 初期化忘れ注意！！
    map<char,int>mp;
    rep(i,0,n) {
      if(bit & (1<<i)) {
        int l = s[i].size();
        rep(j,0,l) {
          char c = s[i][j];
          mp[c]++;
          if(mp[c] == k) {
            st.insert(c);
          }
          if(mp[c] == k+1) {
            st.erase(c);
          }
        }
      }
    }
    int num = st.size();
    ans = max(ans,num);
  }
  cout << ans << endl;
}