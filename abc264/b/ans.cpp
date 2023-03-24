#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,m; cin >> n >> m;

  int dis = max(abs(n-8),abs(m-8));

  if(dis % 2 == 0) cout << "white" << endl;
  else cout << "black" << endl;
}