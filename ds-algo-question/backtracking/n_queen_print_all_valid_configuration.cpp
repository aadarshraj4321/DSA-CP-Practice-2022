#include<bits/stdc++.h>


void printBoard(int board[][20], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
}

bool isQueenPlace(int board[][20], int n, int i, int j)
{
	// Check column
	for(int k = 0; k < i; k++)
	{
		if(board[j][k] == 1)
			return false;
	}

	// Check left diagnol
	int row = i;
	int col = j;

	while(row >= 0 && col >= 0)
	{
		if(board[row][col] == 1)
			return false;
		row--; j--;
	}

	// check right diagnol
	row = i;
	col = j;
	while(row >= 0 && col < n)
	{
		if(board[row][col] == 1)
			return false;
		row--; col++;
	}
	return true;
}

int allValidNQueenConfig(int board[][20], int n, int i)
{
	// Base Case
	if(i == n)
	{
		std::cout << "------------Valid Configuration------------\n";
		printBoard(board, n);
		std::cout << "------------Valid Configuration End------------\n";
		return 1;
	}

	// Rec Case
	// Try to put queen in every row
	int allPossibleConfigCount = 0;
	for(int j = 0; j < n; j++)
	{
		if(isQueenPlace(board, n, i, j))
		{
			board[i][j] = 1;
			printBoard(board, n);
			allPossibleConfigCount += allValidNQueenConfig(board, n, i + 1);
			board[i][j] = 0;
		}
	}
	return allPossibleConfigCount;
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	int board[20][20] = {0};
	int n;
	std::cin >> n;
	std::cout << allValidNQueenConfig(board, n, 0) << '\n';
	

	return 0;
}