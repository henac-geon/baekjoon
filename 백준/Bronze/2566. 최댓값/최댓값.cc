#include<iostream>

using namespace std;

int main(void) {
	int arry[9][9] = {};
	int temp = -1, posx, posy;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arry[i][j];
			if (temp <= arry[i][j]) {
				temp = arry[i][j];
				posx = i + 1;
				posy = j + 1;
			}
		}
	}

	cout << temp << "\n" << posx << " " << posy;

	return 0;
}