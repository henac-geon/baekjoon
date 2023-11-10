#include <iostream>
#include <string>
using namespace std;

int main() {
    int size = 0, sum = 0;
    string num = "";

    cin >> size;
    cin >> num;

    for (int i = 0; i < size; i++) sum += num[i] - 48;

    cout << sum;

    return 0;
}