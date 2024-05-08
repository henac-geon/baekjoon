#include <iostream> 
#include <algorithm>
// sort()함수를 사용하기 위해 <algorithm>을 include 한다. 

using namespace std;

int main(void) {
    //정렬 대상 배열

    int n, k;
    int arr[1000] = { };       

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];

    // 정렬
    // 첫번째 인자 = 배열의 포인터
    // 두번째 인자 = 배열의 포인터 + 배열의 크기
    sort(arr, arr + n);
    cout << arr[n- k] << endl;

    return 0;
}