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

int dist(int ix, int iy, int jx, int jy) {
  return (ix-jx)*(ix-jx) + (iy-jy)*(iy-jy);
}

int main() {
  vector<string> s(9);
  rep(i,9) {
    cin >> s[i];
  }
  int ans = 0;
  rep(i,81)rrep(j,i+1,80)rrep(k,j+1,80)rrep(l,k+1,80) {
    int ix = i / 9; int iy = i % 9;
    int jx = j / 9; int jy = j % 9;
    int kx = k / 9; int ky = k % 9;
    int lx = l / 9; int ly = l % 9;
    if(s[ix][iy] == '.' || s[jx][jy] == '.' || s[kx][ky] == '.' || s[lx][ly] == '.') {
      continue;
    }
    map<int,int> mp;
    mp[dist(ix,iy,jx,jy)]++;
    mp[dist(ix,iy,kx,ky)]++;
    mp[dist(ix,iy,lx,ly)]++;
    mp[dist(jx,jy,kx,ky)]++;
    mp[dist(jx,jy,lx,ly)]++;
    mp[dist(kx,ky,lx,ly)]++;
    if(mp[0] > 0) continue;

    int mind;
    int now = 0;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
      now++;
      if(now == 2) mind = itr->first;
    }
    if(mp[mind] == 4 && mp[mind*2] == 2) {
      ans++;
    }
  }
  return 0;
}