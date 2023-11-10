#include <iostream>

int main() {
	int c, num1, num2;
	std::cin >> c;

	for (int i = 1; i <= c; i++) {
		std::cin >> num1 >> num2;
		std::cout << "Case #" << i << ": " << num1 + num2 << "\n";
	}
	return 0;
}