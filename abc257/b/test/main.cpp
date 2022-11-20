#include <bits/stdc++.h>
using namespace std;
#define re(i, a) for (int i = 0; i < a; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define drep(i, a, b) for (int i = a; i >= b; i--)
#define fore(i, a) for (auto &i : a)
typedef long long ll;

int main() {
  int n, k, q; cin >> n >> k >> q;

  vector<int> a(n+1);
  re(i,k) {
    cin >> a[i];
  }

  re(i,q) {
    int l;
    cin >> l; l--;
    if(a[l] == n) continue;
    if(l == k-1) a[l]++;
    if(a[l]+1 < a[l+1]) a[l]++;
  }

  re(i,k) {
    cout << a[i] << " ";
  }
  cout << endl;
}