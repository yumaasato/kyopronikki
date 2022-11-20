#include <iostream>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, vector<int>> graph;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	queue<int> que;
	que.push(1);
	set<int> S;
	S.insert(1);
	while (!que.empty()) {
		int v = que.front(); que.pop();
		for (int i : graph[v]) {
			if (!S.count(i)) {
				que.push(i);
				S.insert(i);
			}
		}
	}
	cout << *S.rbegin() << '\n';
}
