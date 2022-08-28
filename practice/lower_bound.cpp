// lower_boundによる二分探索
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
  int *pos;
  int idx;

  pos = lower_bound(a, a+14, 3);
  idx = distance(a,pos);
  cout << "a["<< idx << "] = " << *pos << endl; // a[5] = 4

  pos = lower_bound(a, a+14,2);
  idx = distance(a,pos);
  cout << "A[" << idx << "] = " << *pos << endl; // a[2] = 2

}