#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) x.begin(), x.end()
typedef long long ll;
const ll INF = 1000000000000000000LL;
const int inf = 1e9+7;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> s(n+1);
  rep(i,4*n-1) {
    int a; cin >> a;
    s[a]++;
  }
  rrep(i,1,n){
    if(s[i] != 4) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}