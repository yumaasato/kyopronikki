#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  ll n; cin >> n;
  vector<ll> res = {0};
  rep(i,0,60) {
    if(n&(1ll<<i)) {
      int num = res.size();
      rep(j,0,num) {
        res.push_back(res[i]|(1ll<<i));
      }
    }
  }
  sort(res.begin(),res.end());
  for(auto &nx : res) cout << nx << endl;
}