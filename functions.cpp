#include <iostream>

// This function will print the game board when required
void printGameBoard(char board[]) {
  std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
  std::cout << "---|---|---\n";
  std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
  std::cout << "---|---|---\n";
  std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
}

// This function will print an informative game board to help the players understand where they can choose to play
void printHelpBoard() {
  std::cout << " 1 | 2 | 3 \n";
  std::cout << "---|---|---\n";
  std::cout << " 4 | 5 | 6 \n";
  std::cout << "---|---|---\n";
  std::cout << " 7 | 8 | 9 \n";
}

// Need a function to grab player input and return that to a function to place it on the game board
int getPlayerInput() {
  return -1;
}

// Need a function to place player input on to game board that uses the above function
void placePlayerInput() {
  // Uses getPlayerInput()
}

// Need a function to check if the game has been won by someone and return true if it has to the main game loop
bool checkGameWinConditions() {
  // Check Horizontal

  // Check Vertical

  // Check Diagonal
  return false;
}

