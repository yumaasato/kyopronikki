#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)

#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;

int main() {
  int a,b,c,d; cin >> a >> b >> c >> d;
  for(ll x = a-2; x <= a+2; x++) {
    for(ll y = b-2; y <= b+2; y++) {
      if((a-x)*(a-x) + (b-y)*(b-y) == 5 && (c-x)*(c-x) + (d-y)*(d-y) == 5) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}