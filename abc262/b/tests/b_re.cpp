#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int n,m; cin >> n >> m;
  vector a(n, vector<bool>(n)); // n*nのbool型二次元配列

  int u,v;
  rep(i,0,m)  {
    cin >> u >> v;
    u--; v--;
    a[u][v] = a[v][u] = true;
  }
  int count = 0;
  rep(i,0,m)rep(j,i+1,m)rep(k,j+1,m) {
    if(a[i][j] && a[j][k] && a[k][i]) count++;
  }
  cout << count << endl;

}