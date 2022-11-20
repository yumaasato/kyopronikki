#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,m; cin >> n >> m;
  n--; m--;
  int a[2][2];
  re(i,2)re(j,2) cin >> a[i][j];

  cout << a[n][m] << endl;
}