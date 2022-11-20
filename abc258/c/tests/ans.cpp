#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,q; cin >> n >> q;
  string s; cin >> s;
  pair<int, int> qu;
  ll st = 0;
  re(i,q) {
    cin >> qu.first >> qu.second;
    if(qu.first == 1)  {
      // 新しいスタート位置=(前のスタート位置-x)%n
      st = (st-qu.second+n) % n;
    }
    else {
      // (スタート位置+(x-1))%N)番目の文字を出力
      cout << s[(st+qu.second-1)%n] << '\n';
    }
  }
}