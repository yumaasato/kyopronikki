#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int r,c;
  cin >> r >> c;
  int g[15][15] ={
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,0,0,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1}
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1}
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
  }

  if(max(abs(r-8), abs(c-8)) % 2) cout << "black" << endl;
  else cout << "white" << endl;

}