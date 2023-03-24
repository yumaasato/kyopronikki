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
  int n; cin >> n;
  // n = (n*108) / 100
  int num = (n*108) / 100;
  if(num < 206) {
    cout << "Yay!" << endl;
  } else if(num == 206) {
    cout << "so-so" << endl;
  } else {
    cout << ":(" << endl;
  }

  return 0;
}