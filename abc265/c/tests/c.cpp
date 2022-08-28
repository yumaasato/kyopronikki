#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;

int main() {
  int h,w; cin >> h >> w;
  vector<string> g(h);
  for(auto& s : g) cin >> s;
  vector vec(w,vector<int>(w,false));

  int i = 0, j = 0;
  while(1) {
    if(vec[i][j] == true) {
      cout << -1 << endl;
      exit(0);
    }
    vec[i][j] = true;
    if([i][j] == 'U' and i != 0)
  }
}