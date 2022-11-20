#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int n; cin >> n;
  vector<vector<int> > d(n,vector<int>(n));
  rep(i,0,n) {
    rep(j,0,i+1) {
      if(j == 0 || j == i) {
        d[i][j] = 1;
        cout << d[i][j] << " ";
      }
      else {
        d[i][j] = d[i-1][j-1] + d[i-1][j];
        cout << d[i][j] << " ";
      }
    }
    cout << endl;
  }
}