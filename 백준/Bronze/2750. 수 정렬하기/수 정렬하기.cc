#include <iostream> 
#include <algorithm>

using namespace std;

int main(void) {
    int a;
    int arr[1000] = { };

    cin >> a;
    for (int i = 0; i < a; i++) cin >> arr[i];
    
    sort(arr, arr + a);

    for (int i = 0; i < a; i++) cout << arr[i] << ' ';
    return 0;
}