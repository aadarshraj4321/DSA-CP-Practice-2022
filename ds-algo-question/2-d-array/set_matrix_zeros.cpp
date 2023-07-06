#include<bits/stdc++.h>



void markCol(int &i)
{

}



void setMatrixZeros(std::vector<std::vector<int>>&arr)
{

	int rows = 4;
	int cols = 3;
	std::vector<int>rowArray(rows, 0);
	std::vector<int>colArray(cols, 0);

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if(arr[i][j] == 0)
			{
				rowArray[i] = 1;
				colArray[j] = 1;
			}
		}
	}


	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if(rowArray[i] || colArray[j])
			{
				arr[i][j] = 0;
			}
		}
	}



	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}
}


int main()
{

	std::vector<std::vector<int>>arr = {{1, 0, 1}, {0, 2, 3}, {5, 6, 7}, {3, 2, 0}};

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';;
	}

	std::cout << '\n';
	setMatrixZeros(arr);

}