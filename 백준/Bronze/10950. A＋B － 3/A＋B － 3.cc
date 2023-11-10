#include <iostream>

int main() {
	int c, num1, num2;
	int i = 0;
	std::cin >> c;

	for (i; i < c; i++) {
		std::cin >> num1 >> num2;
		std::cout << num1 + num2 << "\n";
	}
	return 0;
}