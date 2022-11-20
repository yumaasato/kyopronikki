#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
int ans = 1000000;

int main() {
  int n,m; cin >> n;
  bool flag[12][12];
  int a[12][12];
  int x[50], y[50];
  rrep(i,1,n)rrep(j,1,n) cin >> a[i][j];

  vector<int> k;
  rrep(i,1,n) k.push_back(i);

  cin >> m;
  rrep(i,1,m) {
    cin >> x[i] >> y[i];
  }

  rrep(i,1,m) {
    flag[x[i]][y[i]] = true;
    flag[y[i]][x[i]] = true;
  }

  do {
      bool ok = true;
      int time = 0;
      rep(i,0,n-1) {
        if(flag[k[i]][k[i+1]] == true) ok = false;
      }
      rep(i,0,n) time += a[k[i]][i+1];
      if(ok == true) ans = min(ans,time);

  } while(next_permutation(k.begin(),k.end()));

  if(ans == 1000000) ans = -1;
  cout << ans << endl;
}