#include<iostream>
#include<stdlib.h>    //abs()

using namespace std;

int main(void) {
	
	int count = 0;
	cin >> count;

	for (int i = 1; i < (2 * count); i++) {
		for (int j = 0; j <= abs(count - i) - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < ((count - abs(count - i)) * 2) - 1; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}