#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
const ll INF = 1e18;

int main() {
  ll a; int b,c;
  cin >> a >> b >> c;
  ll n1 = c;
  rep(i,0,b-1) n1 *= c;

  if(a < n1) cout << "Yes" << endl;
  else cout << "No" << endl;
}