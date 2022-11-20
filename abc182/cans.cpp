#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const int INF = 1e6;

int main() {
  string s; cin >> s;
  int n = s.size();

  vector<int> c(3);
  re(i,n) c[(s[i]-'0')%3]++; // 桁ごとの余り
  int x = 0; // 全体の和
  re(i,3) x += c[i]*i;
  int ans = INF;

  re(i1,3)re(i2,3) {
    if (c[1] < i1) continue;
    if (c[2] < i2) continue;
    if(i1+i2 == n) continue;
    int nx = x;
    nx -= i1*1;
    nx -= i2*2;
    if(nx %3 == 0) ans = min(ans,i1+i2);
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
}