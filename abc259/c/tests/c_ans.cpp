#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

void rle(string s, vector<pair<char, int>> &vec) {
  int cnt = 1;
  rep(i,1,s.size()) {
    if(s[i] != s[i-1]) {
      vec.push_back({s[i-1], cnt});
      cnt = 0;
    }
    cnt++;
  }
  vec.push_back({s.back(), cnt});
}

int main() {
  string s,t;
  cin >> s >> t;
  vector<pair<string,int>> svec, tvec;

  if(svec.size() != tvec.size()) {
    cout << "No" << endl;
    return 0;
  }

  bool ans = true;
  rep(i,0,svec.size()) {
    if(svec[i].first != tvec[i].first) ans = false;
    if(!(svec[i].second == tvec[i].second || svec[i].second < tvec[i].second && svec[i].second >= 2)) ans =false;
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}