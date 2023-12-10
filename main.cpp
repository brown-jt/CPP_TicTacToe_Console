#include <iostream>
#include "functions.hpp"

int main() {
  char gameboard[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  int playerTurn = 0; // 0 == X     1 == O     Binary digits represent player turn
  int turnNumber = 0; // To ensure the game doesn't continue past 9 times since the board will be full at that point
  bool gameEnded = false;
  bool winner = false;
  /* std::cout << "Checking printHelpBoard() function\n";
  printHelpBoard();

  std::cout << "\nChecking printGameBoard() function\n";
  printGameBoard(gameboard);

  std::cout << "\nChecking get, check, and place PlayerInput() functions\n";
  int playerChoice = checkPlayerInput(playerTurn, gameboard); // Checking get & check functions - checkPlayerInput() function contains the getPlayerInput() function
  placePlayerInput(playerTurn, playerChoice, gameboard); //Checking placePlayerInput() function

  std::cout << "\nChecking to see updated gameboard to ensure all is working correctly\n";
  printGameBoard(gameboard); */

  // All of the above is working correctly, commented out to allow debugging of next implemented functions

  // Time to loop 9 times (ignoring win conditions for now)
  printHelpBoard();
  while (turnNumber < 9) {
    printGameBoard(gameboard);
    int playerChoice = checkPlayerInput(playerTurn, gameboard);
    placePlayerInput(playerTurn, playerChoice, gameboard);
    playerTurn = 1 - playerTurn; // To cycle between 0 and 1 for player
    turnNumber++; // Increment turn number since a position on the board has been played
    // Here we would check win conditions
  }
  printGameBoard(gameboard); // Printing final game board
  return 0;
}