#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
// 無限大を表す値
const long long INF = 1LL << 60;

int main() {
  int n,q; cin >> n;
  vector<ll> a(n);
  rep(i,0,n) cin >> a.at(i);
  sort(a.begin(), a.end());

  cin >> q;

  rep(i,0,q) {
    long long b;
    cin >> b;
    // はじめてb.at(i)以上の値をとるaのindexを返す
    int index = lower_bound(a.begin(), a.end(), b) - a.begin();

    // a[j-1]とa[j]を比較する index=0,nの場合に範囲外参照が発生するので注意
    long long res = INF;
    if (index < n) res = min(res, abs(b-a[index]));
    if (index > 0) res = min(res, abs(b-a[index-1]));

    cout << res << endl;
  }

}
