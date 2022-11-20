#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int k; cin >> k;
  int sum = 0;

  rrep(a,1,k)rrep(b,1,k)rrep(c,1,k) {
    sum += gcd(gcd(a,b),c);
  }

  cout << sum << endl;
}