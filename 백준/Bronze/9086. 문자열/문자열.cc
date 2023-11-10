#include<iostream>

int main(void) {
	std::string c[10];
	int num = 0;
	std::cin >> num;
	for (int i = 0; i < num; i++) {
		std::cin >> c[i];
	}
	for (int i = 0; i < num; i++) {
		std::cout << c[i].front() << c[i].back()<< std::endl;
	}
	return 0;
}