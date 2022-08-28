#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,a; cin >> n;
  vector<int> b(105);
  vector<bool> flag(105,false);

    int sum = 0;
  rep(i,0,n) {
    cin >> a;
    rrep(j,0,i) {
      if(flag[j] == true) continue;
      b[j] += a;
      if(b[j] >= 4) { 
        sum++;
        flag[j] = true;
      }
    }
  }
  cout << sum << endl;
}