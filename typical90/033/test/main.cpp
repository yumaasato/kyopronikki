#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;
typedef long long ll;

int main() {
  int h,w; cin >> h >> w;
  int ans = ((h+1)/2) * ((w+1)/2);
  if(h == 1 && w == 1) ans = 1;
  cout << ans << endl;
}