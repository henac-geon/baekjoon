#include <iostream> 
#include <algorithm>
// sort()함수를 사용하기 위해 <algorithm>을 include 한다. 

using namespace std;

int main(void) {
    //정렬 대상 배열

    int arr[5] = { };
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= 5;
    cout << sum << endl;

    // 정렬
    // 첫번째 인자 = 배열의 포인터
    // 두번째 인자 = 배열의 포인터 + 배열의 크기
    sort(arr, arr + 5);
    cout << arr[2] << endl;

    return 0;
}