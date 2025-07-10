#include<iostream>
#include <unordered_map>

using namespace std;

int main(void) {
	int n, m, count = 0;

	cin >> n >> m;

	string s;
	unordered_map<string, bool> q;

	for (int i = 0; i < n; i++) {
		cin >> s;
		q[s] = 1;
	}

	for(int i = 0; i < m; i++) {
		cin >> s;
		if (q[s]) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}