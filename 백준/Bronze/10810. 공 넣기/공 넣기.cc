#include <iostream>

using namespace std;

int main(void) {

    int n, m, i, j, k;

    cin >> n >> m;

    int* a;
    a = (int*)malloc(sizeof(int) * n);

    for (int t = 0; t < n; t++) {
        a[t] = 0;
    }

    for (int t = 0; t < m; t++) {
        cin >> i >> j >> k;
        for (int h = i - 1; h < j; h++) a[h] = k;
    }

    for (int t = 0; t < n; t++) {
        cout << a[t] << " ";
    }

    return 0;
}