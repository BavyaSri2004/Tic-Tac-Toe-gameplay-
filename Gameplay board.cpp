#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to check for a win
bool checkwin(char board[3][3], char currentplayer) {
    for (int i = 0; i < 3; i++) {
        // Check the rows
        if ((board[i][0] == currentplayer) && (board[i][1] == currentplayer) && (board[i][2] == currentplayer)) 
            return true;
        // Check the columns
        if ((board[0][i] == currentplayer) && (board[1][i] == currentplayer) && (board[2][i] == currentplayer)) 
            return true;
    }
    // Check the diagonals
    if ((board[0][0] == currentplayer) && (board[1][1] == currentplayer) && (board[2][2] == currentplayer)) 
        return true;
    if ((board[0][2] == currentplayer) && (board[1][1] == currentplayer) && (board[2][0] == currentplayer)) 
        return true;

    return false;
}

// Function to check for a draw
bool checkdraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') 
                return false;
        }
    }
    return true;
}

// Function to display the board
void Displayboard(char board[3][3]) {
    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---+---+---" << endl;
    }
    cout << endl;
}

// Main gameplay function
void playboard() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    bool gamerunning = true;
    char currentplayer = 'X'; // Start with player 'X'
    cout << "Welcome to Tic-Tac-Toe game!" << endl;
    Displayboard(board);

    while (gamerunning) {
        cout << currentplayer << "'s turn" << endl;
        int row, col;
        while (true) {
            cout << "Enter ROW (1-3) and COL (1-3): ";
            cin >> row >> col;
            row--; col--;
            if ((row >= 0 && row < 3) && (col >= 0 && col < 3) && (board[row][col] == ' ')) {
                board[row][col] = currentplayer;
                break;
            } else {
                cout << "Invalid row or column! Try again." << endl;
            }
        }

        Displayboard(board);

        if (checkwin(board, currentplayer)) {
            cout << currentplayer << " won!" << endl;
            gamerunning = false;
        } else if (checkdraw(board)) {
            cout << "It's a draw!" << endl;
            gamerunning = false;
        } else {
            // Switch players
            currentplayer = (currentplayer == 'X') ? 'O' : 'X';
        }
    }
}

int main() {
    char playgame;
    do {
        playboard();
        cout << "Do you want to play again? (y/n): ";
        cin >> playgame;
    } while (playgame == 'y' || playgame == 'Y');
    cout << "Thank you for playing the game!" << endl;
    return 0;
}
