
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b, c, largest; // 변수를 정의합니다.
	// 3개의 정수 값을 입력받습니다.
	cout << "3개의 정수를 입력하시오 : "; 
	cin >> a >> b >> c;
	// 조건문을 이용해 a,b,c 로 하여금 값을 비교하고 largest 에 대입합니다.
	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;
	// 조건문을 이용해 구한 값을 출력합니다. 
	cout << "가장 큰 정수는 " << largest << endl;
	return 0;

}