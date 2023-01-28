#include<bits/stdc++.h>


bool isSafePlace(int board[9][9], int i, int j, int num)
{
	for(int k = 1; k <= 9; k++)
	{
		if(board[i][k] == num || board[k][j] == num)
		{
			return false;
		}
	}

	int rows = (i / 3) * 3;
	int cols = (j / 3) * 3;

	for(int row = rows; row < rows + 3; row++)
	{
		for(int col = cols; col < cols + 3; col++)
		{
			if(board[row][col] == num)
			{
				return false;
			}
		}
	}
	return true;
}


bool isValidSudoku(int board[9][9], int i, int j)
{
	if(j == 9)
		return isValidSudoku(board, i + 1, 0);

	if(i == 9)
		return true;


	if(board[i][j] == 0)
	{
		for(int num = 1; num <= 9; num++)
		{
			if(isSafePlace(board, i, j, num))
			{
				board[i][j] = num;
				bool isSuccess = isValidSudoku(board, i, j + 1);
				if(isSuccess)
					return true;

				board[i][j] = 0;
			}
		}
		return false;
	}
	else
	{
		return isValidSudoku(board, i + 1, j);
	}

}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int board[9][9];
	int n; std::cin >> n;
	
	bool finalResult = isValidSudoku(board, 0, 0);
	if(finalResult)
		std::cout << "True\n";
	else
		std::cout << "False\n";

	return 0;
}