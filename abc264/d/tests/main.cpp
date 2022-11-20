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
  string t = "atcoder";
  int n = t.size();
  map<char,int> mp;
  rep(i,0,n) mp[t[i]] = i;
  vector<int> a(n);
  rep(i,0,n) a[i] = mp[s[i]];

  int ans = 0;
  rep(i,0,n)rep(j,0,i) {
    if(a[j] > a[i]) ans++; 
  }
  cout << ans << endl;
  return 0;
}