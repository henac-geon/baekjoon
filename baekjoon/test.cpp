#include<iostream>
#include<unordered_map>

// #include <bits/stdc++.h> // 이 해더파일 공부하기 

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

	//for (int i = 0; i < n; i++) cin >> arry[i];


	return 0;
}
