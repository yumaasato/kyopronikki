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
  int h,w; cin >> h >> w;
  vector<vector<char> > c(h+1, vector<char>(w+1));
  vector<int> a;
  rrep(i,1,h) {
    rrep(j,1,w) {
      cin >> c[i][j];
    }
  }

  rrep(j,1,w) {
    int cnt = 0;
    rrep(i,1,h) {
      if(c[i][j] == '#') cnt++;
    }
    a.push_back(cnt);
  }

  rep(i,a.size()) cout << a[i] << " ";
  cout << endl;
  return 0;
}