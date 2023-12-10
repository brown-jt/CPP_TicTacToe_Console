#include <iostream>

void printGameBoard(char board[]);

void printHelpBoard();

int getPlayerInput(int playerTurn);

int checkPlayerInput(int playerTurn, char board[]);

void placePlayerInput(int playerTurn, int boardPos, char board[]);

bool checkWinConditions(char board[]);