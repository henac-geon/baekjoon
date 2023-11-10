#include<iostream>
int main(void) {
	std::string c;
	char alpa[26];
	int t[26] = {};
	std::cin >> c;
	for (int i = 0; i < 26; i++) t[i] = -1;
	for (int i = 0; i < c.size(); i++) {
		if(t[c[i] - 97]<= -1) t[c[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++) std::cout << t[i] << " ";
	return 0;
}