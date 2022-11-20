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

int f(int n) {
  return n*n + 2*n + 3;
}

int main() {
  int t; cin >> t;

  int ans = f(f(f(t)+t) + f(f(t)));
  cout << ans << endl;
  return 0;
}