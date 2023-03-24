#include<bits/stdc++.h>
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
using namespace std;

int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h),t(h);
  rep(i,h) cin >> s[i];
  rep(i,h) cin >> t[i];

  vector<string> s1(w),s2(w);
  rep(i,h) {
    rep(j,w) {
      s1[j].push_back(s[i][j]);
      s2[j].push_back(t[i][j]);
    }
  }

  sort(all(s1));
  sort(all(s2));

  if(s1 == s2) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
