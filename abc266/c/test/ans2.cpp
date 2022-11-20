#include <bits/stdc++.h>
using namespace std;
int X[4],Y[4];

bool f(int a,int b,int c) {
  // 外積
	int abx=X[b]-X[a],aby=Y[b]-Y[a];
	int acx=X[c]-X[a],acy=Y[c]-Y[a];
	return abx*acy-aby*acx>0;
}
main()
{
	for(int i=0;i<4;i++)cin>>X[i]>>Y[i];
	cout<<(f(0,1,2)&&f(0,2,3)&&f(1,2,3)&&f(1,3,0)?"Yes":"No")<<endl;
}
