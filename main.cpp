#include <iostream>
#include "functions.hpp"

int main() {
  char gameboard[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
  printGameBoard(gameboard);
  int playerTurn = 0; // 0 == Player X        1 == Player O
  int value = getPlayerInput(playerTurn);
  std::cout << value;
  return 0;
}