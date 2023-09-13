#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "bad";
	bool b = (s1 == s2);
	cout << b << endl;

	s2 = "Good";
	b = (s1 == s2);
	cout << b << endl;
}