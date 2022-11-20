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
  int n; cin >> n;
  vector<int> a(n), b(n);

  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  int x = 0, y = 0;
  rep(i,n)rep(j,n) {
    if(a[i] == b[j] && i == j) x++;
    if(a[i] == b[j] && i != j) y++;
  }
  cout << x << endl;
  cout << y << endl;
  return 0;
}