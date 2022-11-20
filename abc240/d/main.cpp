#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<pair<int,int> > b;
  int cnt = 0;

  rep(i,n) {
    int a; cin >> a;
    cnt++;
    if(b.empty() || b.back().first != a) {
      b.emplace_back(a,1);
    } else {
      b.back().second += 1;
    }
    if(b.back().second == a){
      cnt -= a;
      b.pop_back();
    }
    cout << cnt << '\n';
  }
  return 0;
}