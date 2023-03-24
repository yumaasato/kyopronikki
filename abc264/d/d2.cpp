#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using namespace std;

vector<int> bit;
int sum(int i){
    int s=0;
    while(i>0){
        s+=bit[i];
        i-=i&(-i);
    }
    return s;
}

void add(int i,int x){
    while(i<bit.size()){
        bit[i]+=x;
        i+=i&(-i);
    }
}

int main(){
  bit.resize(10);
  rep(i,0,10) bit[i] = 0;

  string s;
  cin >> s;
  map<char,int> mp;
  string atc="*atcoder";
  rrep(i,1,7) mp[atc[i]] = i;

  vector<int> a={-1};

  rep(i,0,7) a.push_back(mp[s[i]]);

  int res=0;
  rrep(i,1,7) {
    res+=(i-1-sum(a[i]));
    add(a[i],1);
  }

  cout << res << "\n";
  return 0;
}
