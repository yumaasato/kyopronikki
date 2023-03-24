#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  int q;
  cin >> s >> q;
  rep(qi,q) {
    ll t, k;
    cin >> t >> k;
    k--;
    int si = 0;
    if (t <= 60) {
      ll b = 1ll<<t; // 2^t
      si = k/b; // S0における位置(求める文字を生み出したS0の文字)
      k %= b; // b桁の2進数に変換
    }
    ll r = __builtin_popcountll(k); // 右に行く回数
    ll l = t-r; //左に行く回数
    ll x = l + r*2 + (s[si]-'A'); // 左だと1、右だと2進む
    char ans = 'A'+(x%3);
    cout << ans << endl;
  }
  return 0;
}