#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int n; cin >> n;
  map<int,int> mp;
  rep(i,n) {
    int a; cin >> a;
    mp[a]++;
  }

  vector<int> ans;

  fore(s,mp) ans.push_back(s.second);
  reverse(all(ans));

  while(ans.size() < n) ans.push_back(0);

  rep(i,n) cout << ans[i] << '\n';
  return 0;
}