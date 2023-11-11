#include <iostream>

using namespace std;

int main(void) {
    int n, m, j, k, tmp;

    cin >> n >> m;

    int* a = new int[n];
    for (int i = 0; i < n; i++) a[i] = i + 1;

    for (int i = 0; i < m; i++) {
        cin >> j >> k;
        tmp = a[j - 1];
        a[j - 1] = a[k - 1];
        a[k - 1] = tmp;
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";

    delete[] a;
    
    return 0;
}