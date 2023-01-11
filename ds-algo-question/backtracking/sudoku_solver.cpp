#include<bits/stdc++.h>

void printSudokuBoard(int board[9][9])
{
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
}


bool isSafePlace(int board[9][9], int num, int i, int j)
{
	for(int k = 0; k < 9; k++)
	{
		if(board[i][k] == num || board[k][j] == num)
		{
			return false;
		}
	}

	int rows = (i / 3) * 3;
	int cols = (j / 3) * 3;

	for(int k = rows; k < rows + 3; k++)
	{
		for(int l = cols; l < cols + 3; l++)
		{
			if(board[k][l] == num)
				return false;
		}
	}

	return true;
}


bool isSudokuSolve(int board[9][9], int i, int j)
{
	// Base Case
	if(j == 9)
		return isSudokuSolve(board, i + 1, 0);
	if(i == 9)
	{
		printSudokuBoard(board);
		return true;
	}


	// Recursive Case
	if(board[i][j] == 0)
	{

		for(int num = 1; num <= 9; num++)
		{
			if(isSafePlace(board, num, i, j))
			{
				board[i][j] = num;
				bool isSuccess = isSudokuSolve(board, i, j + 1);
				if(isSuccess)
					return true;

				printSudokuBoard(board);
				board[i][j] = 0;
			}
		}
		return false;
	}

	else
		return isSudokuSolve(board, i, j + 1);
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	int sodukuBoard[9][9];
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			std::cin >> sodukuBoard[i][j];
		}
	}
	std::cout << "------------------------------\n";
	std::cout << "------------------------------\n";
	std::cout << "------------------------------\n";
	std::cout << "------------------------------\n";

	isSudokuSolve(sodukuBoard, 0, 0);

	return 0;
}



















// 5 3 0 0 7 0 0 0 0 
// 6 0 0 1 9 5 0 0 0 
// 0 9 8 0 0 0 0 6 0 
// 8 0 0 0 6 0 0 0 3 
// 4 0 0 8 0 3 0 0 1 
// 7 0 0 0 2 0 0 0 6 
// 0 6 0 0 0 0 2 8 0 
// 0 0 0 4 1 9 0 0 5 
// 0 0 0 0 8 0 0 7 9 



// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 
// 0 0 0 0 0 0 0 0 0 