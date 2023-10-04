#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    const int numCell = 10;
    int numlist[numCell] [numCell];
    
    // 2차원 배열에 난수를 저장합니다.
    for (int i = 0; i < numCell; i++) 
    {
        for (int j = 0; j < numCell; j++) 
        {
            int elem = rand() % 1000;;
            numlist[i][j] = rand() % 1000;
            cout << i << ", " << j << " : " << numlist[i][j]<< endl;

        }
    }

    cout << endl;



    // 가장 큰 값과 그 위치를 찾습니다. 
    int max = numlist[0][0]; // 큰값 저장을 위한 변수
    int maxI = 0; // 큰 값이 있는  i를 저장하기 위한 변수
    int maxJ = 0; //큰 값이 있는 j를 저장하기 위한 변수
    for (int i = 0; i < numCell; i++)
    {
        for ( auto var : numlist[i])
        {
            int j = 0;
            j++;
            if ( var > max)
            {
                max = numlist[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }
      
    // 결과를 출력합니다.

    cout << "가장 큰 값은 " << max << "이고,";
    cout << "i와 j는 각각" << maxI << ", " << maxJ << "입니다. " << endl;
    cout << "검증 결과: " << numlist[maxI][maxJ] << endl;

    return 0;
}
