#include<iostream>

using namespace std;

int main(void) {
	int arry[10] = {};
	int n = 0, t = 0;

	for (int i = 0; i < 9; i++){
		cin >> arry[i];
		if (n < arry[i]){
			n = arry[i];
			t = i + 1;
		}
	}
	cout << n << "\n" << t;

	return 0;
}