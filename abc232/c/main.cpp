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
  int n,m; cin >> n >> m;
  vector<vector<int> > x(n,vector<int>(n));
  vector<vector<int> > y(n,vector<int>(n));
  rep(i,m) {
    int a,b; cin >> a >> b;
    a--; b--;
    x[a][b]++;
    x[b][a]++;
  }

  rep(i,m) {
    int c,d; cin >> c >> d;
    c--; d--;
    y[c][d]++;
    y[d][c]++;
  }

  vector<int> s(n);
  rep(i,n) {
    s[i] = i;
  }

  do {
    bool f = true;
    rep(i,n){
      rep(j,n) {
        if(y[s[i]][s[j]] != x[i][j]) f = false;
      }
    }
  if(f) {
    cout << "Yes" << endl;
    return 0;
  }
  }while(next_permutation(all(s)));

  cout << "No" << endl;
  return 0;
}