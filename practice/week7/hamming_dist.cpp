#include <iostream>
#include <string>
using namespace std;

int main()
{	// 변수를 선언합니다. 
	string s1, s2;
	int count = 0;
	//사용자로부터 값을 입력받습니다.
	cout << "DNA1 :";
	cin >> s1;
	cout << "DNA2 :";
	cin >> s2;
	// 조건문과 반복문을 활용해 해밍 거리를 계산합니다. 
	if (s1.length() != s2.length()) {
		// 길이가 다를 시 오류문을 출력합니다. 
		cout << "오류 : 길이가 다름" << endl;

	}
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "해밍 거리는" << count << endl;
	}
	return 0;
}