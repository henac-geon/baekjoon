#include<iostream>

int main(void) {
	int num = 0, a = 0, b = 0, count = 0;
	int arry[100][100] = {0,};

	std::cin >> num;

	for (int i = 0; i < num; i++) {
		std::cin >> a >> b;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) arry[a + j][b + k] = 1;
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) if (arry[i][j] == 1) count++;
	}

	std::cout << count;
	return 0;
}