#include <bits/stdc++.h>
using namespace std;
#define rep(i,N,M) for(int i=N; i<M; i++)

int main(){
  int N,x,y; cin>>N>>x>>y;
  vector<int> A(N);
  rep(i,0,N) cin>>A[i];

  vector<set<int> > DPx(N+1);
  vector<set<int> > DPy(N+1);
  DPx[1].insert(A[0]); DPy[0].insert(0);

  rep(i,0,N){
    if(i%2==0){
      for(auto &j:DPx[i]){
        DPx[i+1].insert(j-A[i]);
        DPx[i+1].insert(j+A[i]);
      }
      DPy[i+1]=DPy[i];
    }else{
      DPx[i+1]=DPx[i];
      for(auto &j:DPy[i]){
        DPy[i+1].insert(j-A[i]);
        DPy[i+1].insert(j+A[i]);
      }
    }
  }

  if(DPx[N].count(x) and DPy[N].count(y)){
    cout<< "Yes" << endl;
  }else{
    cout<< "No" << endl;
  }
}