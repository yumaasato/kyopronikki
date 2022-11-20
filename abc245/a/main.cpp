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
  int a,b,c,d; cin >> a >> b >> c >> d;
  if(a > c) {
    cout << "Aoki" << endl;
  } else if(c > a) {
    cout << "Takahashi" << endl;
  } else {
    if(b > d) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  }
  return 0;
}