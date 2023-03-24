#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
  int n,m; cin >> n >> m;
  vector<int> a;
  rep(i,0,n) a.push_back(0); // 0が単調増加部分列の要素
  rep(i,0,m-n) a.push_back(1);
  do{
    rep(i,0,m)if(a[i]==0) cout << i+1 << " ";
    cout << endl;
  }while(next_permutation(a.begin(), a.end()));

}