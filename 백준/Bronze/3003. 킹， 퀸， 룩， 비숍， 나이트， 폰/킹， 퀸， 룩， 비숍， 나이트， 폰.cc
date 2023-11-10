#include <iostream>

int main() {
    int a[6] = { 1, 1, 2, 2, 2, 8 }, b[6] = {};

    for (int i = 0; i< 6; i++) std::cin >> b[i];
    for (int i = 0; i < 6; i++) a[i] -= b[i];
    for (int i = 0; i < 6; i++) std::cout << a[i] << " ";
    return 0;
}