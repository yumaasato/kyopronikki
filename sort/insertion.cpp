#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 1; i < n; i++) {
    int v = a[i];

    int j = i;
    for (; j > 0; j--) {
      if (a[j-1] > v) a[j] = a[j-1];
      else break;
    }
    a[j] = v;
    cout << "After Step " << i << ": ";
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
  }

  return 0;
}

