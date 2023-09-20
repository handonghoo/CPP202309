#include <iostream>
using namespace std;

int main()
{
	int userInput;
	int i = 0;
	// 정수를 입력합니다.
	cout << "정수를 10번 입력하세요(0을 입력하면 종료)";
	// 입력한 정수의 입력값과 횟수를 출력합니다. 
	for (i = 0; i < 10;)
	{
		cin >> userInput;
		if (userInput == 0)
			break;

		cout << "입력값" << userInput << "횟수 : " << i ++<< endl;

	}
	cout << "종료되었습니다. ";
	return 0;
}




