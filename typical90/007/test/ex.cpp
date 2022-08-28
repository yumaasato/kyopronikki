#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::vector<float> v;
    for (int i = 0; i < 10; ++i) v.push_back(i);

    float val = 11;

    int back = std::lower_bound(v.begin() + 1, v.end() - 1, val) - v.begin();
    int front = back - 1;

    float x = v[front] - val;
    float y = v[back] - val;

    int near;
    if (x * x < y * y)
        near = front;
    else
        near = back;
    cout << v[near] << endl;

    return 0;
}