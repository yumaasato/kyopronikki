#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,m; cin >> n >> m;
  vector<pair<int,int>> p(n);
  for(auto & [a,b] : p) cin >> a >> b;

  int k; cin >> k;
  vector<pair<int,int>> choice(k);
  for(auto & [c,d] : choice) cin >> c >> d;

  int ans = 0;
  re(bit,(1<<k)) {
    vector<bool> ball(n);
    re(i,k) {
      const auto [c,d] = choice[i];
      ball[bit & 1 << i ? c : d] = 1;
    }
    int cnt = 0;
    for(auto[a,b] : p) if(ball[a] && ball[b]) cnt++;
    if(ans < cnt) ans = cnt;
  }
  cout << ans << endl;
}