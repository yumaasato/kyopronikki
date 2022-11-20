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
  string s,t; cin >> s >> t;
  int n = s.size();

  if(s == t) {
    cout << "Yes" << endl;
    return 0;
  }

  rrep(i,1,25) {
    string s1 = s;
    rep(j,n) {
      s1[j] = ((s1[j]-'a')+i)%26 + 'a';
    }
    if(s1 == t) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}