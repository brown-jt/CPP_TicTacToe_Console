#include <iostream>
#include "functions.hpp"

int main() {
  char gameboard[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  int playerTurn = 0; // 0 == X     1 == O     Binary digits represent player turn
  int turnNumber = 0; // To ensure the game doesn't continue past 9 times since the board will be full at that point
  int playerChoice = -1;
  bool gameEnded = false;
  bool winner = false;
  
  // Prints the help board to show the players how to play
  std::cout << "Welcome to this console game of Tic-Tac-Toe / Noughts & Crosses!\n";
  std::cout << "Generic rules apply. A player can win either horizontally, vertically or diagonally.\n";
  std::cout << "Please refer to the below help board to see positions that you can play in:\n";
  printHelpBoard();
  std::cout << "At any time you are prompted for input, the number '0' will show you this help board again.\n";

  // Start of main game loop
  while (!gameEnded) {
    printGameBoard(gameboard);
    playerChoice = checkPlayerInput(playerTurn, gameboard);
    placePlayerInput(playerTurn, playerChoice, gameboard);
    turnNumber++; // Since a correct position has been played we increment the turnNumber to aid simple logic of a draw condition
    gameEnded = checkWinConditions(gameboard);
    if (gameEnded == true) {
      if (playerTurn == 0) { 
        std::cout << "Congratulations to player X!\n";
      } else {
        std::cout << "Congratulations to player O!\n";
      }
      winner = true;
    }
    playerTurn = 1 - playerTurn; // This cycles through 0 and 1 to alternate player
    if (turnNumber == 9 && !winner) {
      gameEnded = true;
      std::cout << "Draw! No winners this time around.\n";
    }
  }

  // Final showing of the game board to the players
  std::cout << "Final game board is as shown:\n";
  printGameBoard(gameboard);

  return 0;
}