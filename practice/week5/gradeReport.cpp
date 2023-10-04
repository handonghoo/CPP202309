#include <iostream>
#include <string>
using namespace std;

int main() {
    const int STUDENT = 5;
    const int SUBJECT = 3;
    int scores[STUDENT][SUBJECT];
    string studentNames[STUDENT] = { "영수", "영희", "철수", "미미", "쥬쥬" };
    string subjectNames[SUBJECT] = { "수학", "영어", "CPP" };

    // 학생별 성적을 입력합니다.
    for (int i = 0; i < STUDENT; i++)
    {
        cout << studentNames[i] << "의 성적을 하나씩 입력하세요." << endl;
        for (int j = 0; j < SUBJECT; j++)
        {
            cout << subjectNames[j] << ":";
            cin >> scores[i][j];
        }
    }

    // 학생별 평균을  출력합니다. 
    for (int i = 0; i < STUDENT; i++) 
    {
        double sum = 0;
        for (int j = 0; j < SUBJECT; j++)
        {
            sum += scores[i][j];
        }
        cout << studentNames[i] << "의 평균은 " << sum / SUBJECT << "입니다." << endl;
    }

    return 0;
}
