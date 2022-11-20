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
  char a,b,c; cin >> a >> b >> c;
  string x = string({a,b,c});
  string y = string({b,c,a});
  string z = string({c,a,b});

  int ans = stoi(x) + stoi(y) + stoi(z);
  cout << ans << endl;
  return 0;
}