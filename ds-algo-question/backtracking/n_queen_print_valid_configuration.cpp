#include<bits/stdc++.h>


void printBoard(int board[][20], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout  << '\n';
	}
	std::cout << '\n';
}

bool isQueenPlace(int board[][20], int n, int i, int j)
{
	// check columns
	for(int k = 0; k < i; k++)
	{
		if(board[j][k] == 1)
			return false;
	}


	// Check right diagonal
	int x = i;
	int y = j;

	while(x >= 0 && y < n)
	{
		if(board[x][y] == 1)
			return false;
		x--; y++;
	}


	// Check left diagnoal
	x = i;
	y = j;
	while(x >= 0 && y >= 0)
	{
		if(board[x][y] == 1)
			return false;
		x--; y--;
	}

	return true;
}


bool solveNQueen(int board[][20], int n, int i)
{
	// Base Case
	if(i == n)
	{
		std::cout << "----------Final Board----------\n";
		printBoard(board, n);
		return true;
	}


	// Rec Case
	// Try to place a queen in every row
	for(int j = 0; j < n; j++)
	{
		if(isQueenPlace(board, n, i, j))
		{
			printBoard(board, n);
			board[i][j] = 1;
			bool success = solveNQueen(board, n, i + 1);	
			if(success)
			{	
				return true;
			}
			printBoard(board, n);
			board[i][j] = 0;
		}
	}
	return false;
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	int board[20][20] = {0};
	int n; std::cin >> n;

	solveNQueen(board, n, 0);


	return 0;
}