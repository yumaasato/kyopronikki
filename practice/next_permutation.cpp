#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
typedef long long ll;

int main() {
  int array[] = {1,2,3,4};
  do{
    rep(i,0,4){
      cout << array[i];
      if(i!=3)cout << " ";
    }
    cout << endl;
  } while(next_permutation(array,array+4)); // 辞書順にsort
  return 0;
}