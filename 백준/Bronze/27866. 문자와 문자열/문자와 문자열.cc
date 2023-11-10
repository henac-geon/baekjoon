#include<iostream>
using namespace std;
int main(void) {
	string ch;
	int num;
	cin >> ch >> num;
	cout << ch[--num];
	return 0;
}