#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  ll k; cin >> k;
  vector<string> ans;
  ll num = k;
  int n = 0;
  while(num > 0) {
    if(num % 2) ans.push_back("2");
    else ans.push_back("0");
    num /= 2;
  }

  reverse(all(ans));
  rep(i,ans.size()) {
    cout << ans[i];
  }
  cout << endl;
  return 0;
}