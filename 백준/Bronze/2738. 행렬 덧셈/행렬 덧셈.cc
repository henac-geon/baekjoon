#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	if (n > 100 || m > 100) return 0;

	int A[101][101] = {}, B[101][101] = {};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> A[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> B[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cout << A[i][j] + B[i][j] << " ";
		cout << "\n";
	}
	return 0;
}