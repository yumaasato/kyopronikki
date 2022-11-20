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
  int n,q; cin >> n >> q;
  vector<int> num(n);
  vector<int> pos(n);
  rep(i,n) num[i] = i;
  rep(i,n) pos[num[i]] = i;

  rep(z,q) {
    int x; cin >> x;
    x--;
    int i = pos[x];
    int j = i+1;
    if(j == n) j = i-1;
    int y = num[j];

    swap(num[i],num[j]);
    swap(pos[x],pos[y]);
  }
  rep(i,n) {
    if(i >= 1) cout << " ";
    cout << num[i]+1;
  }
  cout << endl;
  return 0;
}