#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int hour = 0, min = 0;

	cin >> hour >> min;

	if (min - 45 < 0) {
		if (hour - 1 < 0) {
			hour = 23;
		}
		else {
			hour -= 1;
		}
		min += 15;
	}
	else {
		min -= 45;
	}

	cout << hour << " " << min << "\n";
	return 0;
}