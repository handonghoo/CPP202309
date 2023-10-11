#include <iostream>
using namespace std;

int main() {
    // 게임을 진행하는 데 필요한 변수 선언
    const int numCell = 3;
    int k = 0; // 누구 차례인지 체크하기 위한 변수
    char currentUser = 'X'; // 현재 유저의 돌을 저장하기 위한 변수
    char board[numCell][numCell]{}; // 보드판을 나타내는 2차원 배열
    int x, y = 0; // 사용자에게 xy좌표값을 입력받기 위한 변수
    // 보드판 초기화

    for (int i = 0; i < numCell; i++) {
        for (int j = 0; j < numCell; j++) {
            board[i][j] = ' ';
        }
    }
    // 게임을 무한 반복
    while (true) {
        // 1. 누구 차례인지 출력
        switch (k % 2) {
        case 0:
            cout << k % 2 + 1 << "번 유저(X)의 차례입니다. -> ";
            currentUser = 'X';
            break;
        case 1:
            cout << k % 2 + 1 << "번 유저(O)의 차례입니다. -> ";
            currentUser = 'O';
            break;
        }

        // 2. 좌표 입력 받기
        cout << "(x, y) 좌표를 입력하세요: ";
        int x, y;
        cin >> x >> y;

        // 3. 입력받은 좌표의 유효성 체크
        if (x >= 3 || y >= 3) {// 좌표 범위를 벗어날때
            cout << x << "," << y << ": x와 y둘중 하나가 칸을 벗어납니다. " << endl;
            continue;
        }

        if (board[x][y] != ' ') {// 좌표범위의 입력값이 중복될때
            cout << x << "," << y << ": 이미 돌이 차있습니다. " << endl;
            continue;
        }

        // 4. 입력받은 좌표에 현재 유저의 돌 놓기
        board[x][y] = currentUser;

        // 5. 현재 보드 판 출력
        for (int i = 0; i < 3; i++) {
            cout << "---|---|---" << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j];
                if (j == numCell - 1) {
                    break;
                }
                cout << "   |";
            }
            cout << endl;
        }
        cout << "---|---|---" << endl;
        k++;

        // 6. 모든 칸 다 찼는지 체크하기
        int checked = 0;
        for (int i = 0; i < numCell; i++) {
            for (int j = 0; j < numCell; j++) {
                if (board[i][j] == ' ') {
                    checked++;
                }
            }
        }
        if (checked == 0) {
            cout << "모든 칸이 다 찼습니다.  종료합니다. " << endl;
            break;
        }


        bool isWin = false; // 승리 여부

        // 7.1. 가로/세로 돌 체크하기
        for (int i = 0; i < numCell; i++) {
            if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {
                cout << "가로에 모두 돌이 놓였습니다!!";
                isWin = true;
                break;
            }
            if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {
                cout << "세로에 모두 돌이 놓였습니다!!";
                isWin = true;
                break;
            }
        }

        // 7.2. 대각선을 체크하기
        if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) {
            cout << "왼쪽 위에서 오른쪽 아래 대각선으로 모두 돌이 놓였습니다!";
            isWin = true;
            break;
        }
        if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {
            cout << "오른쪽 위에서 왼쪽 아래 대각선으로 모두 돌이 놓였습니다!";
            isWin = true;
            break;
        }

        // 승리자가 결정되었으면 해당 플레이어를 출력하고 게임을 종료한다.
        if (isWin == true) {
            cout << k % 2   << "번 유저(" << currentUser << ")의  승리입니다!" << endl;
            break;
        }
    }

    return 0;
}