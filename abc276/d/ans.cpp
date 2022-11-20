#include <bits/stdc++.h>
using namespace std;

int main() {

	int N;
	cin>>N;

	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
	}

	int g = 0;
	for(int i=0;i<N;i++){
		g = gcd(g,a[i]);
	}

	int ans = 0;

	for(int i=0;i<N;i++){
		a[i] /= g;
		while(a[i]%2==0){
			a[i] /= 2;
			ans++;
		}
		while(a[i]%3==0){
			a[i] /= 3;
			ans++;
		}
		if(a[i]!=1){
			cout<<-1<<endl;
			return 0;
		}
	}

	cout<<ans<<endl;

	return 0;
}
