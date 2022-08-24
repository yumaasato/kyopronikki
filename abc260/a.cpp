#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
typedef long long ll;
using namespace std;

int main() {
  string s; cin >> s;
  rep(i,0,3) {
    if(count(s.begin(), s.end(), s[i]) == 1) {
      cout << s[i] << endl;
      exit(0);
    }
  }
  cout << -1 << endl;
}