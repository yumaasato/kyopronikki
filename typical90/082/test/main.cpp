#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
typedef unsigned long long ull;
const ll INF = 1000000000000000000LL;
const int inf = 1e9 + 7;

ll calc_digit(ll n) {
  ll res = 0;
  while(n) {
  ++res;
  n /= 10;
  }
  return res;
}

int main() {
  ll l,r; cin >> l >> r;

}