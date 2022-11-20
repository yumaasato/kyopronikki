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
  vector<int> a(n);
  rep(i,n) {
    cin >> a[i];
  }
  int cnt = 0;
  do{
    if(cnt != 1) {
      cnt++;
      continue;
    }
    if(cnt == 1) {
      rep(i,n) {
        cout << a[i] << " ";
      }
      cout << endl;
    }
    break;
  }while(prev_permutation(a.begin(),a.end()));
  return 0;
}