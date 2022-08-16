#include <iostream>
#include <vector>
using namespace std;

void quick(vector<int> &a, int left, int right) {
  if (right - left <= 1) return;

  int pivot_index = (left + right) / 2;
  int pivot = a[pivot_index];
  swap(a[pivot_index], a[right - 1]);

  int i = left;
  for (int j = left; j < right - 1; j++) {
    if (a[j] < pivot) swap(a[i++], a[j]);
  }
  swap(a[i], a[right-1]);

  quick(a, left, i);
  quick(a, i+1, right);
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++) cin >> a[i];

  quick(a,0,n);

  for (int i = 0; i < n; i++) cout << a[i] << " ";

  cout << endl;

  return 0;
}