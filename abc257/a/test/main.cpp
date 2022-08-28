#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;

int main() {
  int n,x;
  cin >> n >> x;

  int moji = 65;
  string s;
  rep(i,0,26) {
    s += string(n,(char)moji);
    moji++;
  }
  cout << s[x-1] << endl;
}