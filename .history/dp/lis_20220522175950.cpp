#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int n, A[MAX+1], L[MAX];

int lis() {
  L[0] = A[0];
  int length = 1;

  for (int i = 1; i < n; i++) {
    if (L[length-1] < A[i]) {
      
    }
  }
}