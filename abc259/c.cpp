#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
  string s,t;
  cin >> s;
  cin >> t;
  rep(i,0,s.size()) {
    if(s[i] == s[i+1]) s.insert(i+1,s[i]);
  }

}