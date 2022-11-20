#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  ll n; cin >> n;

  auto check = [&]
  for(ll i = 1; i*i <= 2*n; i++) {
      if(n*2%i) continue;
  }
}