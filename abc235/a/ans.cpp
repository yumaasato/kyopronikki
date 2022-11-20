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

int main() {
  int n; cin >> n;
  int c = n % 10;
  int a = n / 100;
  int b = n / 10 % 10;
  int x = a*100 + b*10 + c;
  int y = b*100 + c*10 + a;
  int z = c*100 + a*10 + b;
  int ans = x+y+z;
  cout << ans << endl;
  return 0;
}