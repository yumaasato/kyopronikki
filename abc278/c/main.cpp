#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
typedef long long ll;

int main() {
  int n,q; cin >> n >> q;
  map<ll,set<ll>> mp;
  rep(i,q) {
    int t,a,b; cin >> t >> a >> b;
    if(t == 1 && !mp[a].count(b)) mp[a].insert(b);
    if(t == 2 && mp[a].count(b)) mp[a].erase(b);
    if(t == 3) {
      if(mp[a].count(b) && mp[b].count(a)) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  return 0;
}