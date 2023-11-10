#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int number[3] = {};
	int count = 0, reward = 0, same = 0, t = 0;

	for (int i = 0; i < 3; i++) {
		cin >> number[i];
	}

	if (number[0] == number[1]) {
		count++;
		same = number[0];
	}
	if (number[1] == number[2]) {
		count++;
		same = number[1];
	}
	if (number[0] == number[2]) {
		count++;
		same = number[0];
	}
	for (int i = 0; i < 3; i++) {
		if (number[i] > t) t = number[i];
	}

	if (count == 3) reward = 10000 + (same * 1000);
	if (count == 1) reward = 1000 + (same * 100);
	if (count == 0) reward = t * 100;

	cout << reward;

	return 0;
}
