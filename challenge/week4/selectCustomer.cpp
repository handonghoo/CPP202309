#include <iostream>
#include <string>
using namespace std;

int main() {// 상수 및 변수 선언
    const int maxPeople = 3 ;
    //cout << "총 고객의 수를 입력하라: ";
    //cin >> maxPeople;
    string names[maxPeople];
    int ages[maxPeople];    

    // 고객의 이름과 나이를 입력 받는 코드
    for (int i = 0; i < maxPeople; i++) 
    {
        cout << "사람" << i + 1 << "의 이름: ";
        cin >> names[i];
        cout << "사람" << i + 1 << "의 나이: ";
        cin >> ages[i];
    }
    //특정 나이를 입력받습니다.
    int ageThreshold;
    cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요:";
    cin >> ageThreshold;

    cout << ageThreshold  <<"세 이상인 고객들 : "<<endl;

    // ageThreshold보다 나이가 많은 고객 이름 (나이) 출력 코드
    for (int i = 0; i < maxPeople; i++) 
    {
        if (ages[i] >= ageThreshold) 
        {
            cout << names[i] <<" (" << ages[i]<<")"<<"세" << endl;
        }
    }

    // 특정 나이보다 많은 고객이 없는 메시지 출력 코드
    if (ageThreshold > 0 && maxPeople == 0) {
        cout << "해당 나이에 해당하는 고객이 없습니다." << endl;
    }

    return 0;
}