#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
vector<int> x(4);
vector<int> y(4);

int gaiseki(int a, int b, int c) {
  int abx = x[b]-x[a], aby = y[b] - y[a];
  int acx = x[c]-x[a], acy = y[c] - y[a];
  if(abx*acy-acx*aby > 0) return 1;
  else return 0;
}


int main() {
  rep(i,0,4) cin >> x[i] >> y[i];
  int res = (gaiseki(0,1,2)&&gaiseki(0,2,3)&&gaiseki(1,2,3)&&gaiseki(1,3,0));
  if(res) cout << "Yes" << endl;
  else cout << "No" << endl;
}