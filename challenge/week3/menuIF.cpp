#include <iostream>
using namespace std;

int main()
{//  입력받을 값을 cout를 통해 유도합니다. 
	int choice;
	cout << "1.파일저장 " << endl;
	cout << "2.저장 없이 닫기 " << endl;
	cout << "3. 종료 : " << endl;
	cin >> choice;
	// if 문을 이용해서 조건을 세워 값에 따라 맞는 문장을 출력합니다. 
	if (choice == 1)
		cout << "파일 저장을 선택했습니다." << endl;
	else if(choice == 2 )
		cout << "파일 닫기를 선택했습니다." << endl;
	else
		cout << "프로그램을 종료합니다." << endl;
	// 프로그램 종료
	return 0;
