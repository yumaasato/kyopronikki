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
  string n; cin >> n;
  sort(all(n));
  int ans = 0;
  
  do{
    rep(i,1,n.size()) {
      int l = 0, r = 0;
      rep(j,0,i) l = l*10+n[j]-'0';
      rep(k,i,n.size()) r = r*10+n[k]-'0';
      ans = max(ans,l*r);
    }
  }while(next_permutation(all(n)));
  cout << ans << endl;
}