#include <iostream>
using namespace std;

int main()
{// 입력받을 값을 cout를 통해 유도합니다. 
	int choice;
	cout << "1.파일저장 " << endl;
	cout << "2.저장 없이 닫기 " << endl;
	cout << "3. 종료 : " << endl;
	cin >> choice;
	// 스위치를 통해 입력값에 따라 다른 값을 출력합니다. 
	switch (choice)
	{
	case 1:
		cout << "파일 저장을 선택했습니다." << endl;
		break;
	case 2:
		cout << "파일 닫기를 선택했습니다." << endl;
		break;
	case 3:
		cout << "프로그램을 종료합니다." << endl;
		break;
	default:
		cout << "잘못된 선택입니다. " << endl;
		break;
	}
	// 조건이 참일시에 break 문을 통해 빠져나옵니다. 
	return 0;
}