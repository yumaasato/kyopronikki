#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

int main() {
  int k,n; cin >> n >> k;
  vector<int> a(n);

  int maxv = 0;
  rep(i,0,n) {
    cin >> a[i];
    if(a[i] > maxv) maxv = a[i];
  }

  bool flag = false;
  vector<int> b(k+1);
  rep(i,0,k) {
    int b; cin >> b; b--;
    if(a[b] == maxv) {
      cout << "Yes" << endl;
      exit(0);
    }
  }
  cout << "No" << endl;
}