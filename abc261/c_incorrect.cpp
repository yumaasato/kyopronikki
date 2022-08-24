#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i,0,n) {
    string ex; cin >> ex;
    int num = count(s.begin(), s.end(), ex); // 毎回探すことでTLEになる?
    s[i] = ex;
    if(num) cout << s[i] << '(' << num << ')' << endl;
    else cout << s[i] << endl;
  }
}