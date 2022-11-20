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
  vector<ll> x(2),y(2);
  rep(i,2) cin >> x[i] >> y[i];

  rrep(i,x[0]-2, x[0]+2)rrep(j,y[0]-2, y[0]+2) {
    ll d1 = (x[1] - i)*(x[1] - i) + (y[1] - j)*(y[1] - j);
    ll d2 = (x[0] - i)*(x[0] - i) + (y[0] - j)*(y[0] - j);
    if(d1 == 5 && d2 == 5) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}