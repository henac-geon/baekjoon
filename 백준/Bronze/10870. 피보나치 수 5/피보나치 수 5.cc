#include<iostream>

using namespace std;

long long factorial(long long n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	return factorial(n - 2) + factorial(n - 1);
}

int main(void) {

	long long n;

	cin >> n;

	cout << factorial(n);

	return 0;
}