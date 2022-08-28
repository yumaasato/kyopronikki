#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)


int main() {
  int n, q;
  cin >> n;

  vector<int> c(n);
  vector<int> p(n);
  vector<int> s1(n);
  vector<int> s2(n);

  rep(i,0,n) cin >> c.at(i) >> p.at(i);
  cin >> q;

  vector<int> l(n);
  vector<int> r(n);
  rep(i,0,q) {
    cin >> l.at(i) >> r.at(i);
    l.at(i)--; r.at(i)--;
  }

  rep(i,0,n) { // 累積和(0→n1まで)
    s1.at(i) = s1.at(i-1);
    s2.at(i) = s2.at(i-1);
    if(c.at(i) == 1) s1.at(i) += p.at(i);
    if(c.at(i) == 2) s2.at(i) += p.at(i);
  }

  rep(i,0,q) { // 累積和(l→rまで)
  int ans1 = 0, ans2 = 0;
    ans1 = s1[r[i]] - s1[l[i]-1];
    ans2 = s2[r[i]] - s2[l[i]-1];
    cout << ans1 << " " << ans2 << endl;
  }
}