#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  list<int>A({0});
  auto it=A.begin();
  for(int i=0;i<n;i++){
    if(s[i]=='L'){
      it=A.insert(it,i+1);
    }else{
      it++;
      it=A.insert(it,i+1);
    }
  }
  for(int x:A)cout << x << ' ';
}