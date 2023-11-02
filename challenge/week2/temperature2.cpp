#include<iostream>
using namespace std;

int main()
{ // 변수를 선언합니다. 
	float c = 1;
	float f = 1;
	
	// 화씨온도를 입력받습니다.
	
	cout << "화씨온도 : " ;
	cin >> f;	



	// 화씨를 섭씨로 바꾸는 변수를 작성합니다.
	c = (5.0 / 9.0) * (f - 32);


	// 섭씨온도를 출력합니다. 
	cout << "섭씨온도 = " << c ;
	


	return 0;
}