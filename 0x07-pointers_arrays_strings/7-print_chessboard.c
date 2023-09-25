#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @board: chessboard
 * Return: success or error
 */


void print_chessboard(char board[8][8])
{
	int chess;
	int boardChess;

	for (chess = 0; chess < 8; chess++)
	{
		for (boardChess = 0; boardChess < 8; boardChess++)
		{
			_putchar(board[chess][boardChess]);
		}
		_putchar('\n');
	}
}
