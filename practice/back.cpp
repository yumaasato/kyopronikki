#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i<=b;i++)
#define fore(i,a) for(auto &i:a)
typedef long long ll;
using namespace std;

int main() {
    vector<int> vec{ 1, 2, 3, 4, 5 };

    cout << vec.front() << endl; // 初項
    cout << vec.back() << endl; // 末尾

    //値の書き換えもできる
    vec.back() = 50;

    cout << vec.back() << endl;

    cin.get();
}