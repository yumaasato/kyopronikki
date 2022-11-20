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
  string a,b; cin >> a >> b;
  bool f = true;
  if(a[0] == '#' && a[1] == '.' && b[0] == '.' && b[1] == '#') f = false;
  if(a[1] == '#' && a[0] == '.' && b[1] == '.' && b[0] == '#') f = false;
  if(f) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}