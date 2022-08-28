#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int n,m;
  cin >> n >> m;
  vector a(n, vector<bool>(n));

  rep(i, 0, m) {
    int u,v;
    cin >> u >> v;
    u--; v--;
    a[u][v] = a[v][u] = true; // u→v, v→uの辺をtrueとする
  }

  int count = 0;
  rep(i,0,n) rep(j,i+1,n) rep(k,j+1,n) {
    if(a[i][j] and a[j][k] and a[k][i]) count += 1;
  }
  cout << count << endl;
}