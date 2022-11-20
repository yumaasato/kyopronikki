#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int h,w; cin >> h >> w;
  vector<vector<int> > a(h,vector<int>(w));
  rep(i,0,h)rep(j,0,w) cin >> a.at(i).at(j);

  vector<vector<int> > b(h,vector<int>(w));
  vector<int> row(w,0);
  vector<int> col(h,0);
  rep(i,0,h)rep(j,0,w) {
    row.at(j) += a.at(i).at(j);
    col.at(i) += a.at(i).at(j);
  }

  rep(i,0,h)rep(j,0,w) {
    b.at(i).at(j) = row.at(j) + col.at(i) - a.at(i).at(j);
  }

  rep(i,0,h) {
    rep(j,0,w) {
    cout << b.at(i).at(j) << " ";
    }
    cout << endl;
  }

}
