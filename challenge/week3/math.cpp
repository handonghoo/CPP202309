#include <iostream>
#include <time.h>
using namespace std;
// time.h를  사용해 랜덤값을 출력합니다. 
int main()
{
	int i;
	int ans;
	cout << "산수 문제를 자동으로 출제합니다. " << endl;
	// while 문을 활용해서 랜덤한 두 수를 더합니다. 
	while (true) {
		int firstNum = rand() % 100;
		int secondNum = rand() % 100;

		cout << firstNum << "+" << secondNum << "=";
		cin >> ans;
		if (firstNum + secondNum == ans) {
			cout << "맞았습니다. " << endl;
			break;
		}
		else {
			cout << "틀렸습니다." << endl;
		}
		}// 프로그램 종료
	return 0;
	}
