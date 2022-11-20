#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;

int main() {
  int h,w; cin >> h >> w;
  vector<string> g(h);
  rep(i,0,h) cin >> g[i];

  vector<vector<bool>> flag(h, vector<bool>(w,false));

  int i = 0, j = 0;
  while(1) {
    if(flag[i][j] == true) {
      cout << -1 << endl;
      exit(0);
    }
    flag[i][j] = true;
    if(g[i][j] == 'U' && i != 0) i--;
    else if(g[i][j] == 'D' && i != h-1) i++;
    else if(g[i][j] == 'L' && j != 0) j--;
    else if(g[i][j] == 'R' && j != w-1) j++;
    else {
      cout << i+1 << " " << j+1 << endl;
      exit(0);
    };
  }

}