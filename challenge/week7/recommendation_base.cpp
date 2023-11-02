#include <iostream>
using namespace std;

int main()
{
	const int NUM_USERS = 3; // 사용자수
	const int NUM_ITEMS = 3;// 추천받는 항목 수 
	int userPreferneces[NUM_USERS][NUM_ITEMS];

	// 사용자와 항목간의 선호도를 입력 받아 2차원 배열 초기화
	for (int i = 0; i < NUM_USERS; i++)
	{
		cout << "사용자" << (i + 1) << "의 선호도를 입력하세요 ( ";
		cout << NUM_ITEMS << "개의 항목에 대해):";
		for (int j = 0; j < NUM_USERS; j++)
		{
			cin >> userPreferneces[i][j];
		}

	}

	// 각 사용자에 대한 추천 항목 찾기
	for (int i = 0; i < NUM_USERS; i++)
	{
		int maxPreferenceindex = 0;
		for (int j = 0; j < NUM_USERS; j++) {
			if (userPreferneces[i][j] > userPreferneces[i][maxPreferenceindex]) {
				maxPreferenceindex = j;
			}
		}
		// 사용자에게 추천하는 항목 출력
		cout << "사용자" << (i + 1) << "에게 추천하는 항목 : ";
		cout << (maxPreferenceindex + 1) << std::endl;
	}
	return 0;
}
