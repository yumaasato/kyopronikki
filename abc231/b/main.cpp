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
  map<string, int> mp;
  rep(i,n) {
    string s; cin >> s;
    mp[s]++;
  }
  vector<pair<int,string> > ans;

  for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        ans.push_back({ it->second, it->first });
    }

  sort(ans.rbegin(), ans.rend());
  cout << ans[0].second << endl;
  return 0;
}