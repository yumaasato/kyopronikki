#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n; cin >> n;

  // エラトステネスのふるい
  bitset<1000000> is_prime(0);
  rrep(i,2,n) is_prime.set(i);
  rrep(i,2,n) {
    if(is_prime[i]) { // 素数iを発見したら
      rep(j,i*2,n) is_prime.reset(j); // iの倍数をふるいおとす(bitを0にする)
    }
  }
  rep(i,2,n) if(is_prime[i]) cout << i << endl;
}
