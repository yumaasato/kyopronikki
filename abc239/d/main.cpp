#include <bits/stdc++.h>
using namespace std;
#define r(i,a,b) for(int i=a;i<b;i++)
#define rr(i,a,b) for(int i=a;i<=b;i++)
#define d(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
void chmax(ll & x, ll y) { x = max(x,y);}

int isPrime(int x) {
  int i;
  if(x<2) return 0;
  else if(x==2) return 1;
  if(x%2==0) return 0;
  for(i = 3; i*i <= x; i+= 2) {
    if(x%i == 0) return 0;
  }
  return 1;
}

int main() {
  int a,b,c,d; cin >> a >> b >> c >> d;
  rr(x,a,b) {
    bool p = false;
    rr(y,x+c,x+d) {
      if(isPrime(y)) {
        p = true;
      }
    }
    if(!p) {
      cout << "Takahashi" << endl;
      return 0;
    }
  }
  cout << "Aoki" << endl;
  return 0;
}