#include <iostream>

using namespace std;

int main(void) {
    int n, a;
    double max = 0, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (max < a) max = a;
        sum += a;
    }
    
    cout << sum / n / max * 100;

    return 0;
}