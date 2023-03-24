#include <algorithm>
#include <iomanip>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <queue>
#include <set>
#include <list>
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <vector>
#include <climits>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
typedef long long ll;
using P = pair<int, int>;

vector<P> prime_factorize(ll n) {
  vector<P> res;
  for (ll p = 2; p * p <= n; ++p) {
  if (n % p != 0) continue;
    int num = 0;
    while (n % p == 0) { ++num; n /= p; }
    res.push_back(make_pair(p, num));
  }
  if (n != 1) res.push_back(make_pair(n, 1));
  return res;
}

int main() {
  ll n; cin >> n;
  if(n == 1) {
    cout << 0 << endl;
    return 0;
  }
  const auto &res = prime_factorize(n);
  ll ans = 0;
  for(auto ex : res) {
    int p = ex.first; int e = ex.second;
    ll num = p, k = 1;
    set<ll> st;
    while(e > 0) {
      if(e < k) break;
      if(!st.count(num)) {
        st.insert(num);
        ans++; e -= k;
      }
      num *= p; k++;
    }
  }
  cout << ans << endl;
  return 0;
}