#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  vector<pair<int,char>> b;

  int ans = 0;

  re(i,n)  {
    int w; cin >> w;
    b.push_back(make_pair(w,s[i]));
    if(b[i].second == '1') ans++;
  }

  sort(b.begin(),b.end());
  int maxf = ans;

  re(i,n){
    if(b[i].second == '1') maxf--;
    else maxf++;
    if(i < n-1) {
      if(b[i].first != b[i+1].first) ans = max(maxf,ans);
    // if文が成り立たないときはmaxになり得ないので無視する
    }
    else ans = max(maxf,ans); // i = n-1の場合
  }
  cout << ans << endl;
}