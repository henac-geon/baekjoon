#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int n, m;
	cin >> n;
	m = n / 4;

	for (int i = 0; i < m; i++) cout << "long ";
	cout << "int\n";
	return 0;
}