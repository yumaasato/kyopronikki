#include <bits/stdc++.h>
using namespace std;
#define re(i,a) for(int i=0;i<a;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define drep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<string> s(17);
  s[1] = "1";
  
  rrep(i,2,n) {
    s[i] = s[i-1] + " " + to_string(i) + " " + s[i-1];
  }
  cout << s[n] << endl;
}