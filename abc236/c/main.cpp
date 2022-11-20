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
  int n,m; cin >> n >> m;
  vector<string> s(n);
  map<string,int> mp;
  rep(i,n) {
    cin >> s[i];
    mp[s[i]] = 0;
  }
  rep(i,m) {
    string t; cin >> t;
    mp[t]++;
  }
  rep(i,n) {
    if(mp[s[i]] == 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
  return 0;
}