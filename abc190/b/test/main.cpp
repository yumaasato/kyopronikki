#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  ll n,s,d; cin >> n >> s >> d;

  bool flag = false;
  re(i,n) {
    ll x,y; cin >> x >> y;
    if(x < s && y > d) {
      flag = true;
      break;
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}