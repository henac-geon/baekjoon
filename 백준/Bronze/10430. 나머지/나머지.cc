#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	int q[4] = {0,0,0,0};
	q[0] = (a + b) % c;
	q[1] = ((a % c) + (b % c))%c;
	q[2] = (a * b) % c;
	q[3] = ((a % c) * (b % c))%c;
	for (int i = 0; i < 4; i++) std::cout << q[i]<< "\n";
	return 0;
}