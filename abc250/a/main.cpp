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
  int h,w,r,c; cin >> h >> w >> r >> c;
  int ans = 0;
  if(r != 1) ans++;
  if(r != h) ans++;
  if(c != 1) ans++;
  if(c != w) ans++;

  cout << ans << endl;
}