#include<iostream>

using namespace std;

int main(void) {
	int A[100] = {};
	int B[100] = {};
	int i = -1;

	do {
		i++;
		cin >> A[i] >> B[i];
	} while (A[i] != 0 && B[i] != 0);

	i = 0;

	do {
		cout << A[i] + B[i] << endl;
		i++;
	} while (A[i] != 0 && B[i] != 0);

	return 0;
}