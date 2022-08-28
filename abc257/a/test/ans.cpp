#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    string s;
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < n; j++) {
            s.push_back('A' + i);
        }
    }
    x -= 1;
    cout << s[x] << endl;
}
