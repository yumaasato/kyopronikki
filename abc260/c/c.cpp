#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,x,y;
  cin >> n >> x >> y;
  vector<ll> r(15);
  vector<ll> b(15);

  r[n] = 1;

  drep(i,n,2) {
    r[i-1] += r[i];
    b[i] += r[i] * x;
    r[i-1] += b[i];
    b[i-1] += b[i]*y;
  }
  cout << b[1] << endl;
}

