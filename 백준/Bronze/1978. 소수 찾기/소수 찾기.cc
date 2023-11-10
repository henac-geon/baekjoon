#include <iostream>

using namespace std;

int main(void) {
    int num, n, count = 0, result = 0;

    cin >> num;

    for (int i = 0; i < num; i++){
        cin >> n;
        for (int j = 1; j <= n; j++) {
            if (n % j == 0)  count++;
        }
        if (count == 2) result++;
        count = 0;
    }

    cout << result << "\n";
    return 0;
}