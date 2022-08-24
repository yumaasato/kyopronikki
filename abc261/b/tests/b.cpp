#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<char>> a(n, vector<char>(n));

  rep(i,0,n)rep(j,0,n) cin >> a.at(i).at(j);

  rep(i,0,n)rep(j,0,n) {
    if(i == j) continue;
    if((a[i][j] == 'W' and a[j][i] == 'L') or (a[i][j] =='L' and a[j][i] == 'W') or (a[i][j] == 'D' and a[j][i] == 'D')) continue;
    else {
      cout << "incorrect" << endl;
      exit(0);
    }
  }

  cout << "correct" << endl;
  return 0;
}