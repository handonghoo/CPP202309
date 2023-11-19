#include <iostream>
#include <string>
#include <vector>  // 벡터를 사용하기 위해 추가합니다.
using namespace std;

int main() {
    // 상수 및 변수 선언
    int maxPeople;
    cout << "총 고객의 수를 입력하라: ";
    cin >> maxPeople;
    vector<string> names;  // 벡터로 변경하고 초기화 부분을 제거합니다.
    vector<int> ages;      // 벡터로 변경하고 초기화 부분을 제거합니다.

    // 고객의 이름과 나이를 입력 받는 코드
    for (int i = 0; i < maxPeople; i++) {
        cout << "사람" << i + 1 << "의 이름: ";
        string name;
        cin >> name;
        names.push_back(name);  // push_back() 함수를 사용하여 동적으로 요소를 추가합니다.

        cout << "사람" << i + 1 << "의 나이: ";
        int age;
        cin >> age;
        ages.push_back(age);    // push_back() 함수를 사용하여 동적으로 요소를 추가합니다.
    }
    //특정 나이를 입력받습니다.
    int ageThreshold;
    cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요:";
    cin >> ageThreshold;

    cout << ageThreshold << "세 이상인 고객들 : " << endl;

    // ageThreshold보다 나이가 많은 고객 이름 (나이) 출력 코드
    for (int i = 0; i < names.size(); i++) {  // 벡터의 크기에 맞게 수정합니다.
        if (ages[i] >= ageThreshold) {
            cout << names[i] << " (" << ages[i] << ")" << "세" << endl;
        }
    }

    // 특정 나이보다 많은 고객이 없는 메시지 출력 코드
    if (ageThreshold > 0 && names.empty()) {  // 벡터의 empty() 함수를 사용하여 확인합니다.
        cout << "해당 나이에 해당하는 고객이 없습니다." << endl;
    }

    // 벡터는 자동으로 메모리를 해제하므로 delete[] 코드는 제거합니다.

    return 0;
}
