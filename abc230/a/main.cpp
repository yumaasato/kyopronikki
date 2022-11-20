#include <bits/stdc++.h>
// #include <atcoder/all>
using namespace std;
// using namespace atcoder;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
// using mint = modint998244353;
using P = pair<int, int>;

int main() {
  string s; cin >> s;
  int num = stoi(s);
  string ans = "AGC";
  if(num >= 42) num++;
  if(num < 100) ans += '0';
  if(num < 10) ans += '0';
  ans += to_string(num);
  cout << ans << endl;
  return 0;
}