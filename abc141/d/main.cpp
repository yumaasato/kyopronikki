#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,m; cin >> n >> m;
  priority_queue<int> a;

  rep(i,0,n) {
    int k; cin >> k;
    a.push(k);
  }

  rep(i,0,m) {
    int num = a.top(); a.pop();
    a.push(num/2);
  }

  ll ans = 0;
  rep(i,0,n){
    ans += a.top(); a.pop();
  }
  cout << ans << "\n";
}