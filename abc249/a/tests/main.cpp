#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,d,e,f,x;
  cin >> a >> b >> c >> d >> e >> f >> x;
    int n1 = x%(a+c); int n2 = x/(a+c);
    int n3 = x%(d+f); int n4 = x/(d+f);
    int t = n2*a*b + b*min(a,n1);
    int k = n4*d*e + e*min(d,n3);
    
    if(t > k) cout << "Takahashi" << endl;
    else if(t < k) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}