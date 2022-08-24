#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;

int main() {
  int n; cin >> n;
  map<string,int> s;

  for(string x; n--; s[x]++) {
    cin >> x; // s[x]が出現回数を記録
    if(s[x] != 0)cout << x << '(' << s[x] << ')' << endl;
    else cout << x << endl;
  }
}