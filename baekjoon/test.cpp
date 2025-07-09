#include <iostream>
#include <unordered_map>

// #include <bits/stdc++.h> // �� �ش����� �����ϱ� 

using namespace std;

int main() {
	int n, m, a;

	cin >> n;

	unordered_map<int, bool> card;

	for (int i = 0; i < n; i++) {
		cin >> a;
		card[a] = true;
	}

	cin >> m;
	int* check = new int[m];

	for (int i = 0; i < m; i++) {
		cin >> a;
		if (card.find(a) != card.end()) {
			check[i] = 1; // Card exists
		} else {
			check[i] = 0; // Card does not exist
		}
	}

	for (int i = 0; i < m; i++) {
		cout << check[i] << " ";
	}

	return 0;
}
