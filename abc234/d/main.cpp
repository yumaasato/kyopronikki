#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
  // small.top() は small の最大値
  priority_queue<ll> small;

  // large.top() は large の最小値 (k個になるようにする)
  priority_queue<long long, vector<long long>, greater<long long> > large;

  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
      ll p;
      cin >> p;

      if (large.size() < k) {
        large.push(p);
        if(large.size() == k) {
          ll current_kth = large.top();
          cout << current_kth << endl;
        }
        continue;
      }
      
      ll current_kth = large.top();


      if (p > current_kth) {
        large.pop();
        large.push(p);
        small.push(current_kth);
      }

      else {
        small.push(p);
      }

      current_kth = large.top();
      cout << current_kth << endl;
  }
}