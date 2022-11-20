#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n; string t;
  cin >> n >> t;
  int ans[2] = {0,0};
  int di[2] = {1,0};

  rep(i,0,n) {
    if(t[i] == 'S') {
      ans[0] += di[0];
      ans[1] += di[1];
    }
    else {
      if(di[0] == 1 && di[1] == 0) {
        di[0] = 0; di[1] = -1;
      }
      else if(di[0] == 0 && di[1] == -1) {
        di[0] = -1; di[1] = 0;
      }
      else if(di[0] == -1 && di[1] == 0) {
        di[0] = 0; di[1] = 1;
      }
      else {
        di[0] = 1; di[1] = 0;
      }
    }
  }
  cout << ans[0] << " " << ans[1] << endl;
}