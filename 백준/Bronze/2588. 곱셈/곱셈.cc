#include <iostream>

int main() {
	int num1, num2, a, b, c, d, x, y, z;
	std::cin >> num1 >> num2;
	x = num2 % 10;
	y = num2 % 100 - x;
	z = num2 % 1000 - num2 % 100;
	a = num1 * x;
	b = (num1 * y) / 10;
	c = (num1 * z) / 100;
	d = num1 * num2;

	std::cout << a << "\n" << b << "\n" << c << "\n" << d;

	return 0;
}