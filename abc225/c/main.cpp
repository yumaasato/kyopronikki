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
  int n,m; cin >> n >> m;
  vector<vector<int> > b(n+1,vector<int>(m+1));

  vector<int> r(m+1);

  rrep(i,1,n)rrep(j,1,m) {
    cin >> b[i][j];
    b[i][j]--;
  }

  int y = b[1][1] % 7;
  int x = b[1][1] / 7;

  // 表をまたぐパターンをNoとする
  if(y + m - 1 >= 7) {
    cout << "No" << endl;
    return 0;
  }
  
  rrep(i,1,n)rrep(j,1,m) {
    int num = (x + i - 1)*7 + (y + j - 1);
    if(b[i][j] != num) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}