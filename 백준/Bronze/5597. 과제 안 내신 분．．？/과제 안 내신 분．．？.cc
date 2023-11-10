#include<iostream>

using namespace std;

int main(void) {
	bool stu[31] = {false, };
	int num;

	for (int i = 0; i < 28; i++) {
		cin >> num;
		stu[num] = true;	
	}

	for (int i = 1; i < 31; i++) {
		if (!stu[i]) cout << i << "\n";
	}
	return 0;
}