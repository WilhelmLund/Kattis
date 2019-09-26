#include <iostream>
#include <string.h>

using namespace std;

#define LEFT 0
#define UP 1
#define RIGHT 2
#define DOWN 3

void swipe1(int* row){
    if(row[0] == row[1] || row[0] == 0){
        row[0] += row[1];
        row[1] = 0;
    }
}

void swipe2(int* row){
    if(row[1] == 0) swipe1(row+1);
    if(row[0] == row[1] || row[0] == 0){ 
        row[0] += row[1];
        row[1] = row[2];
        row[2] = 0;
    }
    swipe1(row+1);
}

void swipe3(int* row){
    if(row[1] == 0) swipe2(row+1);
    if(row[0] == 0){
        row[0] += row[1];
        row[1] = row[2];
        row[2] = row[3];
        row[3] = 0;
    }
    if(row[0] == row[1]){ 
        row[0] += row[1];
        row[1] = row[2];
        row[2] = row[3];
        row[3] = 0;
    }
    swipe2(row+1);
}

void rotate(int board[4][4]){
    int newBoard[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            newBoard[i][j] = board[j][3-i];
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            board[i][j] = newBoard[i][j];
        }
    }
}

void swipeLeft(int board[4][4]){
    for(int i = 0; i < 4; i++)
        swipe3(board[i]);
}

void swipeRight(int board[4][4]){
    rotate(board);
    rotate(board);
    swipeLeft(board);
    rotate(board);
    rotate(board);
}

void swipeUp(int board[4][4]){
    rotate(board);
    swipeLeft(board);
    rotate(board);
    rotate(board);
    rotate(board);
}

void swipeDown(int board[4][4]){
    rotate(board);
    rotate(board);
    rotate(board);
    swipeLeft(board);
    rotate(board);
}

void swipe(int direction, int board[4][4]){
    if(direction == LEFT) swipeLeft(board);
    else if(direction == RIGHT) swipeRight(board);
    else if(direction == UP) swipeUp(board);
    else if(direction == DOWN) swipeDown(board);
}

int main(){
    string s;
    int board[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> s;
            board[i][j] = stoi(s);
        }
    }

    cin >> s;
    int direction = stoi(s);

    swipe(direction, board); 

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
