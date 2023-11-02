#include <iostream>
using namespace std;;

int main()
{
	int money;
	int candy_price;
	//사용자로부터 값을 입력받습니다. 
	cout << "현재 가지고 있는 돈 : ";
	cin >> money;
	cout << "캔디의 가격 :  ";
	cin >> candy_price;

	// 최대한 살수 있는 사람의 수를 변수화, 출력합니다.
	int n_candies = money / candy_price;
	cout << "최대로 살수있는 캔디의 개수=" << n_candies << endl;
	
	// 사탕을 구입하고 남은 돈을 변수화, 출력합니다. 
	int change = money % candy_price;
	cout << "사탕을 구입하고 남은 돈" << change << endl;




	return 0;
}