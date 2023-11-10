#include<iostream>

using namespace std;

int main(void) {
	bool t[42] = {false, };
	int num, count = 0;


	for (int i = 0; i < 10; i++) {
		cin >> num;
		t[num % 42] = true;
	}


	for (int i = 0; i < 42; i++) {
		if (t[i]) count++;
	}

	cout << count;

	return 0;
}