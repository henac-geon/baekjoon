#include<iostream>
#include<random>
#include<algorithm>
#include <unordered_map>

using namespace std;

int main(void) {
	int n, j;
	cin >> n;

	unordered_map<int, int> arr(n);
	vector<int> arr2(n);

	for (int i = 0; i < n; i++) {
		cin >> j;
		arr[j] = i;
		arr2[i] = j;
	}

	vector<pair<int, int>> vec(arr.begin(), arr.end()); // map을 vector로 변경

	sort(vec.begin(), vec.end(), [](std::pair<int, int>& a, std::pair<int, int>& b)
		{
			return a.first < b.first;		// value 오름차순 정렬
		});

	for (int i = 0; i < vec.size(); i++) {
		arr[vec[i].first] = i; // value를 key로 index 저장
	}

	for (int i = 0; i < n; i++) {
		arr2[i] = arr[arr2[i]]; // index를 value로 변경
	}

	for(int i = 0; i < n; i++) {
		cout << arr2[i] << " ";
	}

	return 0;
}
