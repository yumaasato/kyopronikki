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
  vector<vector<int> > dp(n, vector<int>(n,inf));
  dp[0][0] = 0;
  vector<pair<int,int> >di;
  rrep(a,0,1000) {
    rrep(b,0,1000) {
      if(a*a + b*b == m) {
        di.emplace_back(a,b);
        di.emplace_back(-a,b);
        di.emplace_back(a,-b);
        di.emplace_back(-a,-b);
      }
    }
  }
  int z = di.size();
  queue<pair<int,int> > q;

  q.push(make_pair(0,0));

  while(!q.empty()) {
    pair p = q.front();
    int dx = p.first;
    int dy = p.second;
    q.pop();

  }

  rep(i,0,n) {
    rep(j,0,n) {
      cout << dp[i][j] << ' ';
    }
    cout << endl;
  }
}