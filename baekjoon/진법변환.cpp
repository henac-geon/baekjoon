/*
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void) {
	string input;
	char s; // 여기서 's'는 문자를 담을 변수이므로 char 타입으로 선언되어야 합니다.
	int n;

	cin >> input >> n; // input과 진법 입력

	int result = 0; // 배열 'num'을 사용하지 않기 때문에 'int num[10000] = {};'를 삭제했습니다.

	for (auto i = 0u; i < input.size(); i++) { // 반복문을 0부터 시작하도록 수정했습니다.
		s = input[i]; // 문자열에서 한 글자를 추출하여 's'에 저장합니다.

		int num; // 'num' 변수를 추가했습니다.

		if (s >= '0' && s <= '9') {
			num = s - '0'; // 문자를 숫자로 변환
		}
		else if (s >= 'A' && s <= 'Z') {
			num = s - 'A' + 10; // 문자를 10진수로 변환
		}
		else {
			cout << "Invalid character in input." << endl;
			return 1; // 프로그램 종료
		}

		num *= pow(n, input.size() - 1 - i); // 해당 진법의 수로 변환

		result += num; // 값을 더한다
	}

	cout << result;

	return 0;
}
*/
/*
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
	char m[255];
	int n;
	scanf("%s %d", &m, &n);

	printf("%d\n", strtol(m, NULL, n));

	//strtol 함수를 사용하면 진법으로 표기된 문자열을 정수로 변환시켜준다.
	//strtol 함수는 stdlib.h 헤더 파일에 선언되어 있다.
	
	//strtol(문자열, 끝포인터, 진법); 으로 사용된다.
	
	return 0;
}
*/