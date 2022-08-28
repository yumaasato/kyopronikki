#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  int n,x,y,z; cin >> n >> x >> y >> z;
  vector<int> a(n), b(n);
  rep(i,0,n) cin >> a[i];
  rep(i,0,n) cin >> b[i];
  vector<bool> ok(n);

  auto f = [&](vector<int> d, int num) {
    vector<int> p;
    rep(i,0,n) if(!ok[i]) p.push_back(i);
    auto cmp = [&](int i, int j) {
      if(d[i] != d[j]) return d[i] > d[j];
      return i < j;
    };
    sort(p.begin(), p.end(), cmp);
    rep(i,0,num) ok[p[i]] = true;
    };

  f(a,x);
  f(b,y);
  rep(i,0,n) a[i] += b[i];
  f(a,z);

  rep(i,0,n) if(ok[i]) cout << i+1 << endl;
}