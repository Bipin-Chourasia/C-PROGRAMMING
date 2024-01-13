//Write a program in c to make a tiktak game
#include <stdio.h>

// Function prototypes
void initializeBoard(char board[3][3]);
void displayBoard(char board[3][3]);
int makeMove(char board[3][3], int row, int col, char player);
int checkWinner(char board[3][3]);

int main() {
    char board[3][3];
    int row, col;
    char currentPlayer = 'X';
    int winner = 0;
    int moves = 0;

    initializeBoard(board);

    do {
        // Display the current state of the board
        displayBoard(board);

        // Get the player's move
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Make the move
        makeMove(board, row, col, currentPlayer);
        moves++;

        // Check for a winner
        winner = checkWinner(board);

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (winner == 0 && moves < 9);

    // Display the final state of the board
    displayBoard(board);

    // Display the result of the game
    if (winner == 1)
        printf("Player X wins!\n");
    else if (winner == 2)
        printf("Player O wins!\n");
    else
        printf("It's a draw!\n");

    return 0;
}

// Function to initialize the Tic-Tac-Toe board
void initializeBoard(char board[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to display the Tic-Tac-Toe board
void displayBoard(char board[3][3]) {
    int i, j;
    printf("\n-------------\n");
    for (i = 0; i < 3; i++) {
        printf("| ");
        for (j = 0; j < 3; j++) {
            printf("%c | ", board[i][j]);
        }
        printf("\n-------------\n");
    }
}

// Function to make a move on the Tic-Tac-Toe board
int makeMove(char board[3][3], int row, int col, char player) {
    if (board[row][col] == ' ') {
        board[row][col] = player;
        return 1; // Move successful
    } else {
        return 0; // Move unsuccessful
    }
}

// Function to check for a winner
int checkWinner(char board[3][3]) {
    int i;

    // Check rows and columns
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return (board[i][0] == 'X') ? 1 : 2; // Player X or O wins
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return (board[0][i] == 'X') ? 1 : 2; // Player X or O wins
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return (board[0][0] == 'X') ? 1 : 2; // Player X or O wins
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return (board[0][2] == 'X') ? 1 : 2; // Player X or O wins

    return 0; // No winner yet
}