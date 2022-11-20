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
  int n,m; cin >> n >> m;
  vector<vector<int> > a(101, vector<int>(101));
  vector<int> cnt(101);
  vector<int> k(m);

  rep(i,0,m) {
    cin >> k[i];
    rep(j,0,k[i]) {
      cin >> a[i][j];
    }
  }
  vector<vector<bool> > flag(n+1, vector<bool>(n+1));
  rep(i,0,m){
    rep(j,0,k[i]) {
      rep(z,j+1,k[i]) {
        flag[a[i][j]][a[i][z]] = true;
        flag[a[i][z]][a[i][j]] = true;
      }
    }
  }

  rrep(i,1,n){
    rrep(j,1,n) {
      if(i == j) continue;
      if(flag[i][j] == false) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}