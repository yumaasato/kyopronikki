#include <iostream>
#include <vector>
using namespace std;

void mergesort(vector<int> &a, int left, int right) {
  if (right - left == 1) return;
  int mid = left + (right - left) / 2;

  mergesort(a, left, mid);

  mergesort(a, mid, right);

  vector<int>
}