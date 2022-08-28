#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  // エラトステネスのふるい
  int max = 101010;
  vector<int> is_prime(max,1);
  is_prime[0] = 0, is_prime[1] = 0;
  rep(i,2,max) {
    if(!is_prime[i]) continue;
    rep(j,i*2,max) is_prime[j] = 0;
  }
  // 2017-like数かどうか
  vector<int> a(max,0);
  rep(i,0,max){
    if(i%2 == 0) continue;
    if(is_prime[i] && is_prime[(i+1)/2]) a[i] = 1;
  }

  // 累積和
  vector<int> s(max+1,0);
  rep(i,0,max) s[i+1] = s[i] + a[i];

  // クエリ処理
  int q; cin >> q;
  rep(i,0,q) {
    int l,r; cin >> l >> r;
    r++;
    
    cout << s[r] - s[l] << endl;
  }
}