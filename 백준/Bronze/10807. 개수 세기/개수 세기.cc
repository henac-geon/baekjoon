#include<iostream>

using namespace std;

int main(void) {
	int n = 0, num = 0, count = 0;
	int arry[100] = {};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arry[i];
	}

	cin >> num;

	for (int i = 0; i < n; i++) {
		if (num == arry[i]) count++;
	}
	
	cout << count;

	return 0;
}