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

int main() {
  vector<int> h(3),w(3);
  rep(i,3) cin >> h[i];
  rep(i,3) cin >> w[i];

  int num = 0;
  rrep(i,1,h[0])rrep(j,1,h[0]-i) {
    rrep(k,1,h[1])rrep(f,1,h[1]-k) {
      int a = h[0] - i - j; int b = h[1] - k - f;
      if(a <= 0 || b <= 0) continue;
      if(w[0]-i-k <= 0 || w[1]-j-f <= 0 || w[2]-a-b <= 0) continue;
      if(w[0]-i-k + w[1]-j-f + w[2]-a-b == h[2]) num++;
    }
  }
  cout << num << endl;
  return 0;
}