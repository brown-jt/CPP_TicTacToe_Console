#include <iostream>
#include <limits>

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

// Function used to grab player input and return that to a function that checks to see if the space is available first
int getPlayerInput(int playerTurn) {
  int playerChoice;
  bool numberChosen = false;

  // Checks to see which player it currently is
  if (playerTurn == 0) {
    std::cout << "Player X, it is your turn to play!\n";
  } else {
    std::cout << "Player O, it is your turn to play!\n";
  }

  // Input loop that validates an integer has been presented to the program
  while (!numberChosen) {
    std::cout << "Please enter a number (1-9) of where to play on the board or, alternatively, enter the number 0 to show the help board again: ";

    // Checks if the input is a valid integer
    if (std::cin >> playerChoice) {
      if (playerChoice == 0) {
        printHelpBoard();
      } else if (playerChoice >= 1 && playerChoice <= 9) {
        numberChosen = true;
      } else {
        std::cout << "Number in disallowed range. Enter a number between 0-9 only.\n";
      }
    } else {
      // Handles non-integer input here
      std::cout << "Invalid input. Please enter a number.\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  return playerChoice;
}

// Function that will check to see if the correctly selected position is already taken or not
int checkPlayerInput(int playerTurn, char board[]) {
  bool correctPos = false;
  int boardPos;
  // Start a do-while loop that loops until a correct number has been identified that is an available space
  do {
    boardPos = getPlayerInput(playerTurn) -1;
    if (board[boardPos] != ' ') {
      std::cout << "Position already taken.\n";
    } else {
      std::cout << "Position is available.\n";
      correctPos = true;
    }
  } while (correctPos == false);
  return boardPos;
}

// This function will place player input on to game board that uses the returned board position from the above function
void placePlayerInput(int playerTurn, int boardPos, char board[]) {
  char charToPlace;
  if (playerTurn == 0) {
    charToPlace = 'X';
  } else {
    charToPlace = 'O';
  }
  board[boardPos] = charToPlace;
}

// Need a function to check if the game has been won by someone and return true if it has to the main game loop
bool checkGameWinConditions() {
  // Check Horizontal

  // Check Vertical

  // Check Diagonal
  return false;
}

