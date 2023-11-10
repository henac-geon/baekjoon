#include<iostream>

using namespace std;

int main() {
    int num, a = 0;
    cin >> num;
    while (num > 0) {
        a += num;
        num--;
    }
    cout << a;
    return 0;
}