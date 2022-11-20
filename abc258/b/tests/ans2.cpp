#include <bits/stdc++.h>
using namespace std;
#define rep(i,b) for(int i=0;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<vector<ll>> a(n,vector<ll>(n));
  int mv = 0;

  rep(i,n) { // 入力に注意
    string s; cin >> s;
    rep(j,n)  {
      a[i][j] = s[j]-'0';
    }
  }

  int dx[8] = {0,1,1,1,0,-1,-1,-1};
  int dy[8] = {1,1,0,-1,-1,-1,0,1};

  ll ans = 0;
  rep(i,n)rep(j,n) {
    int x = i; int y = j;
    rep(m,8) {
      ll value = 0;
      rep(k,n)  {
        value = value*10 + a[i][j];
        i = (i+dx[m]+n)%n;
        j = (j+dy[m]+n)%n;
      }
      ans = max(ans,value); // 値を比較
    }
  }
  cout << ans << endl;
  return 0;
}