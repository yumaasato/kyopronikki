#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) x.begin(), x.end()

int main() {
  int n,m; cin >> n >> m;
  vector<int> a(n+1), c(n+m+1);
  rrep(i,0,n) cin >> a[i];
  rrep(j,0,n+m) cin >> c[j];
  vector<int> b;

  drep(j,m,0) {
    int num = c[n+j]/a[n];
    b.push_back(num);
    drep(i,n,0) c[i+j] -= num*a[i];
  }
  reverse(all(b));
  rep(i,b.size()) {
    if(i>=1) cout << " ";
    cout << b[i];
  }
  cout << endl;
}