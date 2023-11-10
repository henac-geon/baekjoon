#include <iostream>

int main() {
	int c, num1[100] = {}, num2[100] = {};

	std::cin >> c;

	for (int i = 0; i < c; i++) {
		std::cin >> num1[i] >> num2[i];
	}
	for (int i = 0; i < c; i++) {
		std::cout << "Case #" << i + 1<< ": " << num1[i] << " + " << num2[i] << " = " << num1[i] + num2[i] << "\n";
	}

	return 0;
}