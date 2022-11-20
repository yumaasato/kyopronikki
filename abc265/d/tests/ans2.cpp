#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	int n;
	ll p,q,r;
	cin >> n >> p >> q >> r;
	ll crr=0;
	set<ll>s({0});
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		crr+=a;
		s.insert(crr); // 累積和を作成
	}

	for(auto x:s){
    // 該当する累積和があるかを判定
		if(s.find(x+p)!=s.end() && s.find(x+p+q)!=s.end() && s.find(x+p+q+r)!=s.end()){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}
