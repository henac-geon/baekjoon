#include <iostream>

using namespace std;

int main(void) {
    int n, m, count, c = 0;

    cin >> n >> count;
    for (int i = 1; c < count; i++) {
        if ((n % i) == 0) {
            m = i;
            c++;
        }
        if (n < i) {
            m = 0;
            break;
        }
    }

    cout << m;
    return 0;
}