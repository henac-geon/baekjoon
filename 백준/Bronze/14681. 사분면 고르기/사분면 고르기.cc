#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int x = 0, y = 0;
	cin >> x >> y;

	if (x > 1000 || x < -1000 || y > 1000 || y < -1000 || x == 0 || y == 0) {
		cout << "범위를 벗어났습니다.";
		return 0;
	}

	if (x > 0 && y > 0) {
		cout << 1 << "\n";
	}
	else if (x < 0 && y > 0) {
		cout << 2 << "\n";
	}
	else if (x < 0 && y < 0) {
		cout << 3 << "\n";
	}
	else{
		cout << 4 << "\n";
	}
	return 0;
}