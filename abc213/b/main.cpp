#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<P> a;
  int num = 0;
  rep(i,n) {
    int s; cin >> s;
    a.emplace_back(s,i+1);
  }

  sort(a.rbegin(), a.rend());
  cout << a[1].second << endl;
  return 0;
}