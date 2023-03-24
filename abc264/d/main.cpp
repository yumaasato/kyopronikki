#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

int main() {
  string s; cin >> s;
  string t = "atcoder";
  vector<int> num(7);
  map<char,int> mp;
  rep(i,8) mp[t[i]] = i;
  rep(i,8) num[i] = mp[s[i]];

  int ans = 0;
  rep(i,8)rrep(j,i+1,7) {
    if(num[i] > num[j]) {
      swap(num[i],num[j]);
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}