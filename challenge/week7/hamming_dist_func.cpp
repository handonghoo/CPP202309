#include <iostream>
#include <string>
using namespace std;

//함수를 작성합니다. 


// 모든 문자열을 소문자로 만듭니다.
string toLowerStr(string str) 
{
	for (char& c : str) {
		c = tolower(c);
	}
	return  str;
}
// 모든 문자열을 대문자로 만듭니다.
string toUpperStr(string str)
{
	for (char& c : str) {
		c = toupper(c);
	}
	return str;
}
// 해밍거리를 재는 핵심알고리즘이 포함된 함수
int calcHammingDist(string s1,string s2)
{
	int count = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		
		if (s1[i] != s2[i])
			count += 1;
	}
	return count;
}

int main()
{
	// 변수를 선언 후 사용자로부터 값을 입력받습니다.
	string s1, s2;
	int count = 0;
	int a;
	cout << "DNA1 :";
	cin >> s1;
	cout << "DNA2 :";
	cin >> s2;

	// 대소문자 구별을 없애줍니다. 
	toLowerStr(s1);
	toUpperStr(s1);
	toUpperStr(s2);

	// 결과 조건에 맞춰 해밍거리를 출력하거나 오류문을 출력합니다. 
	if (s1.length() != s2.length()) {
		cout << "오류 : 길이가 다름" << endl;
	}
	else {
		a = calcHammingDist(s1,s2);
		
		cout << "해밍 거리는" << a << endl;
	}
	return 0;
}