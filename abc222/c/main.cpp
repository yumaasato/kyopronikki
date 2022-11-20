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

int janken(char a, char b) {
  if (a == b) return 0;
  if (a == 'G' && b == 'C') return 1;
  if (a == 'P' && b == 'G') return 1;
  if (a == 'C' && b == 'P') return 1;
  return -1;
}

int main() {
  int n,m; cin >> n >> m;
  vector<vector<char> > a(2*n,vector<char>(m));

  rep(i,2*n)rep(j,m) cin >> a[i][j];

  vector<P> w(n*2);
  rep(i,2*n) w[i] = P(0,i);

  rep(mi,m) {
    rep(ni,n) {
      int i = ni*2, j = ni*2+1;
      int ai = w[i].second, aj = w[j].second;
      int num = janken(a[ai][mi], a[aj][mi]);
      if(num == 1) w[i].first--;
      if(num == -1) w[j].first--;
    }
    sort(w.begin(), w.end());
  }
  rep(i,2*n) cout << w[i].second + 1 << endl;
  return 0;
}