#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n = 0;

	cin >> n;

	if (n < 0 || n > 100) return 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) cout << "*";
		cout << "\n";
	}

	return 0;
}