#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

int main() {
  int n; cin >> n;
  vector<pair<pair<string,int>, int>> p[109];
  rep(i,n) {
    string s; int t; cin >> s >> t;
    p[i] = make_pair(make_pair(s,-t),i+1);
  }
  sort(all(p));
  rep(i,n) {
    cout << p[i].second << endl;
  }
  return 0;
}