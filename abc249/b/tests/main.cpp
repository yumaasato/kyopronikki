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
  bool lf = false, sf = false, un = true;
  map<char,int> mp;

  for(char c : s) {
    if(isupper(c)) {sf = true; mp[c]++;}
    if(islower(c)) {lf = true; mp[c]++;}
    if(mp[c] > 1) {un = false;}
  }

  if(lf && sf && un) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}