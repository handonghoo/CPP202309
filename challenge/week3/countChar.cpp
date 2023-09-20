#include <iostream>
using namespace std;

int main()
{
	int vowel = 0, consonant = 0;
	char ch;
	// 자음에 비해 모음의 개수가 적음을 활용해서 각각의 개수를 구합니다.
	cout << "영문자를 입력하고 ctrl -z를 치세요 " << endl;
	while (cin >> ch) {
		switch (ch) {
		case 'a': case 'i': case 'e': case 'o': case 'u':
			vowel++; break;
		default:
			consonant++; break;
		}
	}
	cout << "모음:" << vowel << endl;
	cout << "자음:" << consonant << endl;
	return 0;
}