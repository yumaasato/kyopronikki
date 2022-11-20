#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  string s; cin >> s;
  vector<bool> flag(10);
  rep(i,0,s.size()) {
    flag[s[i] - '0'] = true;
  }
  rep(i,0,10) {
    if(!flag[i]) cout << i << endl;
  }
}