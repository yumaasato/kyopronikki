#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;

int main() {
  int n,m,x,y;
  ll t;
  vector<int> a(100010);
  vector<ll> b(100010, 0);

  cin >> n >> m >> t;

  rep(i,1,n) cin >> a.at(i);

  rep(j,0,m)  {
    cin >> x >> y;
    b[x] = y; // x個目の部屋にbonus y点を加算
  }

  rep(i,1,n) {
    t -= a.at(i);
    if(t <= 0) {
    cout << "No" << endl;
    return 0;
    }
    t += b.at(i+1);
  }
  cout << "Yes" << endl;
  return 0;
}