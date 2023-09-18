#include <iostream>
using namespace std;

int main()
{// 값을 입력받습니다.
	int number;
	cout << "숫자를 입력하시오: ";
	cin >> number;
	// 입력받은 값을 조건문에 따라 분류해서 그에 맞춰 값을  출력합니다. 
	if (number == 0)
		cout << "zero\n";
	else if (number == 1)
		cout << "one\n";
	else 
		cout << "many\n";
	// 프로그램 종료
	return 0;
}