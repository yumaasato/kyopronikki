// 約数が8つある奇数の数を求める
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)

vector<int> vec(int n) {
  vector<int> s;
  rep(i, 1LL*i*i, n) if(n%i==0) {
    s.push_back(i);
    if(i*i != n) s.push_back(n/i);
  }
  sort(s.begin(), s.end());
  return s;
}


int main(void) {
  int n; cin >> n;
  int ans = 0;

  rep(i,i,n+1) if(i%2==1) {
    
  }
}