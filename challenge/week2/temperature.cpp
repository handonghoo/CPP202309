#include<iostream>
using namespace std;

int main()
{ // 변수를 선언합니다. 
	float c = 1;
	float f = 1;
	// 화씨를 섭씨로 바꾸는 변수를 작성합니다.
	c = (5.0 / 9.0) * (f - 32);
	// 사용자로 부터 값을 입력받고, 화씨를 섭씨로 바꾸는 문장을 출력합니다. 
	cin >> f;
	cout << "화씨온도" << f << "도는 섭씨온도" << c << "입니다. ";


	return 0;
}