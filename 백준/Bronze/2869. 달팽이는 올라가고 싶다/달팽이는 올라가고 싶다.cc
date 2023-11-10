#include<iostream>

using namespace std;

int main(void) {

	int A, B, V;

	cin >> A >> B >> V;
	V -= A;
	if(V % (A -B) > 0){
		V /= (A - B);
		V++;
	}
	else {
		V /= (A - B);
	}
	cout << ++V;

	return 0;
}