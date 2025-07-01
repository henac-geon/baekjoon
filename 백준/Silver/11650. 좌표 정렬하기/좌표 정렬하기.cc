#include<iostream>
#include<random>
#include<ctime>
#include<algorithm>

using namespace std;

struct QuickSort
{
	int x, y;
};

int main(void) {
	int n;
	cin >> n;

	vector<QuickSort> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}

	sort(arr.begin(), arr.end(), [](const QuickSort& a, const QuickSort& b) {
		return a.x < b.x || (a.x == b.x && a.y < b.y);
		});

	for(int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}

	return 0;
}