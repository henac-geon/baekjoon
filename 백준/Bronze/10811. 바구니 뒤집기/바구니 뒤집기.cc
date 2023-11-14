#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int* n;
    int size, count, begin, end;
    cin >> size >> count;
    n = new int[size];
    for (int i = 0; i < size; i++) n[i] = i + 1;

    for (int i = 0; i < count; i++) {
        cin >> begin >> end;
        reverse(n + begin - 1, n + end);
    }

    for (int i = 0; i < size; i++) cout << n[i] << " ";

    return 0;
}