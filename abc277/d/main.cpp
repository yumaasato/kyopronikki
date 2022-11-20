#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define all(x) x.begin(), x.end()
typedef long long ll;
ll n,m;
ll sum = 0,ans = 0;
vector<int> a;

int main() {
  cin >> n >> m;

  rep(i,n) {
    int x; cin >> x;
    a.push_back(x);
  }

  rep(i,n) sum += a[i];
  sort(all(a));
  rep(i,n) {
    a.push_back(a[i]+m);
  }

  bool f = true;
  rep(i,n) {
    if(a[i+1] - a[i] >= 2) f = false;
  }
  if(f == true) {
    cout << "0" << endl;
    return 0;
  }

  int cx = 0; ll ret = 0;
  while(cx < 2*n) {
    ret += a[cx]%m;
    ans = max(ans,ret);
    if(a[cx+1]-a[cx] >= 2) {
      ret = 0;
    }
    cx++;
  }
  cout << sum - ans << endl;
  return 0;
}