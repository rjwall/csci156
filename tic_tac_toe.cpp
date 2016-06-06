// Chapter 7, Programming Challenge 18: Tic-Tac-Toe Game
#include <iostream>

int main()
{
	// Array for the game board.
	char gameBoard[ROWS][COLS] = { '*', '*', '*',
								   '*', '*', '*',
								   '*', '*', '*' };

	do
	{
		// Display the game board.
		displayBoard(gameBoard);
      
		// Let player 1 have a turn.
		playerTurn(gameBoard, 'X');
      
		// Display the game board again.
		displayBoard(gameBoard);
      
		// If the game is not over, let
		// player 2 have a turn.
		if (!gameOver(gameBoard))
			playerTurn(gameBoard, 'O');
         
	} while (!gameOver(gameBoard));
   
	// Display the board one last time.
	displayBoard(gameBoard);
   
	// Display the winner.
	displayWinner(gameBoard);

	return 0;
}

