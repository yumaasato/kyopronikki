#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1000000000000000000LL;

int main() {
  int n,k; cin >> n >> k;
  vector<int> a;
  rep(i,0,k) {
    int num; cin >> num;
    a.push_back(num);
  }

  sort(a.begin(), a.end(), greater<int>());

  int ans = 0;
  int res = n;
  int state = 1;

  rep(i,0,k) {
    if(res < a[i]) continue;
    int m = res / a[i];
    if(m % 2 == 0) {
      ans += (m/2)*a[i];
      res -= m*a[i];
    }
    else {
      if(state == 1){
        state *= -1;
        ans += ((m/2)+1)*a[i];
        res -= m*a[i];
      }
      else {
        state *= -1;
        ans += (m/2)*a[i];
        res -= m*a[i];
      }
    }

    if(res == 0) break;
  }
  cout << ans << endl;
}