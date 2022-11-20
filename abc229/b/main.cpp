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

int calc_digit(ll n) {
  int res = 0;
  while(n) {
     ++res;
     n /= 10;
  }
  return res;
}

int main() {
  string a,b; cin >> a >> b;

  int x = a.size();
  int y = b.size();

  while(true) {
    int num = (a[x-1] - '0') + (b[y-1] - '0');
    if(num >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
    if(x > 0 && y > 0) {
      x--; y--;
    }
    else break;
  }
  cout << "Easy" << endl;
  return 0;
}