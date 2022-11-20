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

bool flag(int x, vector<int>a) {
  set<int> n;
  n.insert(0);
  for(int na : a){ 
    set<int> s;
    swap(s,n);  // 1操作でAiから移動可能な点だけを持ってくる
    for(int nx : s) {
      n.insert(nx+na); // sに移すと1操作でAiから移動可能な点以外も操作されるためnに移す
      n.insert(nx-na);
    }
  }
  if(n.count(x)) return true;
  return false;
};

int main() {
  int n,x,y; cin >> n >> x >> y;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  vector<int> dx, dy;
  rep(i,n) {
    if(i % 2 == 1) dy.push_back(a[i]);
    else dx.push_back(a[i]);
  }
  if(flag(x,dx) && flag(y,dy)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}