#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int answer = rand() % 100;
	int tries = 0;

    int guess;
    //맞출 정수를 입력하고, 높고 낮음을 출력해줍니다. 
        while (true) {
            cout << "정답을 추측하여 보시오: ";
            cin >> guess;
            tries++;

            if (guess > answer)
                cout << "제시한 정수가 높습니다." << endl;
            else if (guess < answer)
                cout << "제시한 정수가 낮습니다." << endl;
            else
                break;
        }
        // 반복문에서 탈출해서 시도횟수를 출력합니다. 
	cout << "축하합니다. 시도횟수 : =" << tries << endl;

	return 0;
}
