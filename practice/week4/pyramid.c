#include <stdio.h>

int main()
{
    int floor;
    printf("몇 층을 쌓겠습니다? (5~100)");
    scanf_s("%d", &floor);

    for (int i = 0; i < floor; i++) {
        // 층을 쌓는다.
        for (int j = 0; j < floor - 1 - i; j++) {// floor 줄 -1-i만큼 출력한다.
            printf("S");
        }
        for (int k = 0; k < i * 2 + 1; k++) { //1,3,5,7,9,…,i*2+1만큼*을출력한다.
            printf("*");
        }
        printf("\n");
    }

    return 0;
}