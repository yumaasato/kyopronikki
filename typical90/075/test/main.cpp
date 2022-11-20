#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;
ll n;

vector<ll> prime() {
  ll rem = n;
  vector<ll> p;
  for(ll i = 2; i*i <= n; i++) {
    while(rem%i == 0) {
      rem /= i;
      p.push_back(i);
    }
  }
  if(rem != 1LL) p.push_back(rem);
  return p;
}

int main() {
  cin >> n;

  int ans = 0;
  vector<ll> s = prime();
  for(int i = 0; i <= 20; i++) {
    if((1<<i) >= (int)s.size()) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}