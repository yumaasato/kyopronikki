#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  string n; cin >> n;
  int c = n.size();

  vector<bool> flag;
  int ans = 1000;
  for(int bit = 0; bit < (1<<c); bit++) {
    ll sum = 0;
    int digit = 0;
    drep(i,c-1,0) {
      if(bit & (1<<i)) {
        sum *= 10;
        sum += n[i]-'0';
      }
      else digit++;
    }
    if(sum % 3 == 0 && sum != 0) {
      ans = min(ans,digit);
    }
  }
  if(ans == 1000) cout << -1 << endl;
  else cout << ans << endl;
}