#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
using P = pair<int, int>;

int main() {
  int n,k; cin >> n >> k;
  set<int> c;
  vector<int> nex(n+1,-1),num(n+1),ans(n+1,-1);

  rrep(i,1,n) {
    int p; cin >> p;
    auto it = c.lower_bound(p);
    if(it == c.end()) {
      num[p] = 1;
    } else {
      c.erase(it);
      nex[p] = *it; num[p] = num[*it] + 1;
    }
    if(num[p] == k) {
      int id = p;
      while(id != -1) {
        ans[id] = i;
        id = nex[id];
      }
    } else {
      c.insert(p);
    }
  }

  rrep(i,1,n) {
    cout << ans[i] << endl;
  }
  return 0;
}