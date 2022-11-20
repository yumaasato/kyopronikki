#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;

int isPrime(ll x) {
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
  ll n; cin >> n;
  ll ans = 0;

  vector<ll> s;
  s.push_back(2);
  for(ll q = 3; q*q*q <= n; q++) {
    if(!isPrime(q)) continue;
    ll num = min(n/q/q/q, q-1LL);
    auto itr = upper_bound(all(s), num);
    ll index = distance(s.begin(), itr);
    ans += index;
    s.push_back(q);
  }
  cout << ans << endl;
  return 0;
}