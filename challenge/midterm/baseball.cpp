#include <iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

int start = 0;

// 모든 수가 다른지 체크하는 함수
void checknumber(int firstNum, int secondNum, int thirdNum) {
    
    if ((firstNum != secondNum) && (firstNum != thirdNum) && (secondNum != thirdNum)) {
        start = 1;
    }
    
}

int main() {
    srand(static_cast<unsigned int>(time(NULL)));

    int randomNum;
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;

    while (1) {
        randomNum = rand() % 900 + 100;

        

        // 3자리 숫자의 자릿수를 추출
        firstNum = randomNum / 100;
        secondNum = (randomNum % 100) / 10;
        thirdNum = randomNum % 10;

        // 모든 수가 다른지 체크
        checknumber(firstNum, secondNum, thirdNum);



        if (start == 1) {
            break;
        }
        else {
            continue;
        }
    }

    int turn = 0;

    while (1) {
        cout << turn + 1 << "번째 시도입니다. " << endl;

        int userNumber;
        int guessFirst = 0;
        int guessSecond = 0;
        int guessThird = 0;

        while (1) {
            cout << "세자리 수를 입력해주세요: ";
            cin >> userNumber;

        

            // 3자리 숫자의 자릿수를 추출
            guessFirst = userNumber / 100;
            guessSecond = (userNumber % 100) / 10;
            guessThird = userNumber % 10;

            // 모든 수가 다른지 체크

            if (to_string(userNumber).length() != 3) {
                cout << "입력된 숫자가 3자리 수가 아닙니다. 다시 입력하세요." << endl;
                continue;
            }

            checknumber(guessFirst, guessSecond, guessThird);

            if (start == 1) {
                break;
            }
            
        }

        int strike = 0;
        int ball = 0;

        // 정답과 추측한 숫자의 자릿수와 숫자를 비교
        if (guessFirst == firstNum) {
            strike++;
        }
        else if (guessFirst == secondNum || guessFirst == thirdNum) {
            ball++;
        }

        if (guessSecond == secondNum) {
            strike++;
        }
        else if (guessSecond == firstNum || guessSecond == thirdNum) {
            ball++;
        }

        if (guessThird == thirdNum) {
            strike++;
        }
        else if (guessThird == firstNum || guessThird == secondNum) {
            ball++;
        }

        cout << userNumber << "의 결과 : " << strike << " 스트라이크, " << ball << "볼 입니다." << endl;

        if (strike == 3) {
            cout << "정답을 맞췄습니다. 축하합니다.";
            break;
        }

        turn += 1;
    }

    return 0;
}
