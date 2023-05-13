#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	if (n > 100 || m > 100) return 0;

	int A = {}, B = {};

	for (int *i = 0; *i < n; i++) {
		for (int *j = 0; *j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int *i = 0; *i < n; i++) {
		for (int *j = 0; *j < m; j++) {
			cin >> B[i][j];
		}
	}
	for (int *i = 0; *i < n; i++) {
		for (int *j = 0; *j < m; j++) {
			A[i][j] += B[i][j];
			cout << A[i][j];
		}
	}
	return 0;
}