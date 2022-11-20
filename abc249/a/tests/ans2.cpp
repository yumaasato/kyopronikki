#include <bits/stdc++.h>
using namespace std;

int calc(int a,int b, int c, int x) {
  int p = x/(a+c), r = x%(a+c);
  int s = p*a + min(r,a);
  return s*b;
}

int main() {
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int T = calc(a,b,c,x);
  int A = calc(d,e,f,x);

  if (T > A) cout << "Takahashi" << endl;
  else if (T < A) cout << "Aoki" << endl;
  else cout << "Draw" << endl;
  return 0;
}