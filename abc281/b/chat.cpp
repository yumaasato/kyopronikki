#include <iostream>
#include <string>

using namespace std;

int main() {
    // 文字列 S を受け取る
    string S;
    cin >> S;

    // 文字列 S の長さが 8 文字であることを確認する
    if (S.length() != 8) {
        cout << "No" << endl;
        return 0;
    }

    // 文字列 S が条件を満たすかどうかを判定する
    // 1文字目が英大文字かどうかを確認する
    if (!isupper(S[0])) {
        cout << "No" << endl;
        return 0;
    }

    // 2文字目から7文字目までが整数値 100000 以上 999999 以下かどうかを確認する
    int value = stoi(S.substr(1, 6));
    if (value < 100000 || value > 999999) {
        cout << "No" << endl;
        return 0;
    }

    // 8文字目が英大文字かどうかを確認する
    if (!isupper(S[7])) {
        cout << "No" << endl;
        return 0;
    }

    // 条件を満たす場合は "YES" を出力する
    cout << "Yes" << endl;
    return 0;
}
