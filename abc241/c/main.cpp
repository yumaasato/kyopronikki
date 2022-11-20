#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i,n) {
    cin >> s[i];
  }
  bool f = false;
  rep(i,n)rep(j,n) {
    if((j+5)<n) {
      int cnt = 0;
      rep(k,6) {
        if(s[i][j+k] == '#') cnt++;
        if(cnt >= 4) f = true;
      }
    }
    if((i+5)<n) {
      int cnt = 0;
      rep(k,6) {
        if(s[i+k][j] == '#') cnt++;
        if(cnt>= 4) f = true;
      }
    }
    if((i+5)<n && (j+5) < n) {
      int cnt = 0;
      rep(k,6) {
        if(s[i+k][j+k] == '#') cnt++;
        if(cnt>= 4) f = true;
      }
    }
    if((i-5)>=0 && (j+5)<n) {
      int cnt = 0;
      rep(k,6) {
        if(s[i-k][j+k] == '#') cnt++;
        if(cnt>= 4) f=true;
      }
    }
  }
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}