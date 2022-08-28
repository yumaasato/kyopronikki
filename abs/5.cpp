#include<bits/stdc++.h>
using namespace std;

// 各桁の和を求める
int digit_sum(int n) {
  if(n < 10) return n;
  return digit_sum(n/10) + n%10;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int sum = 0;

  for(int i = 1; i <= n; i++) {
    if(digit_sum(i) <= b and digit_sum(i) >= a) sum += i;
  }

  cout << sum << endl;
}