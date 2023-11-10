#include<iostream>

using namespace std;

int main() {
    int total_price, total_count, price, count, sum = 0;
    cin >> total_price >> total_count;
    for (int i = 0; i < total_count; i++) {
        cin >> price >> count;
        sum = sum + price * count;
    }
    if (total_price == sum) cout << "Yes";
    else cout << "No";
    return 0;
}