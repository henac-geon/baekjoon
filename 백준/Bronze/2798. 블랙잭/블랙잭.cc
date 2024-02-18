#include<iostream>

using namespace std;

int main(void) {
	int n = 0, m = 0;
	int arr[100];

	cin >> n >> m;

	for (int i = 0; i < n; i++) cin >> arr[i];
	
	int result = 0, sum = 0;

	for (int i = 0; i < n - 2; i++) {
		for (int j = i+1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum > result && sum <= m) result = sum;
			}
		}
	}

	cout << result;
	return 0;
}