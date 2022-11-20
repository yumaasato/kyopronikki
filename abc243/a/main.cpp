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
  int v,a[3]; cin >> v >> a[0] >> a[1] >> a[2];

  int i = 0;
  while(v >= 0) {
    v -= a[i];
    if(v < 0 && i == 0) {
      cout << "F" << endl;
      return 0;
    }
    if(v < 0 && i == 1) {
      cout << "M" << endl;
      return 0;
    }
    if(v < 0 && i == 2) {
      cout << "T" << endl;
      return 0;
    }
    i = (i+1)%3;
  }

  return 0;
}