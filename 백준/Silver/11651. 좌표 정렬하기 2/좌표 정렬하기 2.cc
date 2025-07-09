#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

struct pos
{
	int x, y;
};

bool operator<(const pos& a, const pos& b) {
	if (a.y == b.y) {
		return a.x > b.x;
	}
	return a.y > b.y;
}

int main(void) {
	int n, x, y;
	cin >> n;

	priority_queue<pos> arr;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		pos p;
		p.x = x;
		p.y = y;
		arr.push(p);
	}

	while (!arr.empty()) {
		pos p = arr.top();
		arr.pop();
		cout << p.x << " " << p.y << "\n";
	}

	return 0;
}