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
  string s; cin >> s;
  int n = s.size();
  int l = 0, r = n - 1;
  while(l < r && s[l] == 'a' && s[r] == 'a') {
    ++l; --r;
  }
  while(l < r && s[r] == 'a') --r;
  while(l < r && s[l] == s[r]) {
    ++l; --r;
  }
  if(l >= r) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}