#include<iostream>

using namespace std;

int main(void) {
	int n = 0, num = 0;
	int arry[10000] = {};

	cin >> n >> num;

	for (int i = 0; i < n; i++) cin >> arry[i];

	for (int t = 0; t < n; t++) {
		if (num > arry[t]) {
			cout << arry[t] << " ";
		}
	}

	return 0;
}