#include <iostream>
#include <string>
#include <algorithm>
// sort()함수를 사용하기 위해 <algorithm>을 include 한다. 

using namespace std;

int main(void) {
    //정렬 대상 배열

    string n;
    int arr[20] = { };

    cin >> n;
    for (int i = 0; i < n.length(); i++)  arr[i] = stoi(n.substr(i, 1));

    // 정렬
    // 첫번째 인자 = 배열의 포인터
    // 두번째 인자 = 배열의 포인터 + 배열의 크기
    sort(arr, arr + n.length(), greater<int>());

    // for (int i = n.length()-1; i >= 0; i--) cout << arr[i];
    for (int i = 0; i < n.length(); i++) cout << arr[i];

    return 0;
}