#include<iostream>
#include<string>

using namespace std;

int main(void) {
	string name, grd;
	double num, sum = 0, sum1 = 0;

	for (int i = 0; i < 20; i++) {
		cin >> name >> num >> grd;
		if (grd != "P") {
			if (grd == "A+") sum += num * 4.5;
			else if (grd == "A0") sum += num * 4.0;
			else if (grd == "B+") sum += num * 3.5;
			else if (grd == "B0") sum += num * 3.0;
			else if (grd == "C+") sum += num * 2.5;
			else if (grd == "C0") sum += num * 2.0;
			else if (grd == "D+") sum += num * 1.5;
			else if (grd == "D0") sum += num * 1.0;
			else if (grd == "F") sum += num * 0.0;
			sum1 += num;
		}
	}
	cout << fixed;
	cout.precision(6);
	cout << sum / sum1 << "\n";

	return 0;
}