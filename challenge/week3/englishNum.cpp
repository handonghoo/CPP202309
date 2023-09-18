#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "숫자를 입력하시오: ";
	cin >> number;

	if (number == 0)
		cout << "zero\n";
	else if (number == 1)
		cout << "one\n";
	else 
		cout << "many\n";

	return 0;
}