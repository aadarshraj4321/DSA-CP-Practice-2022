#include<bits/stdc++.h>




void rotateMatrix90Degree(std::vector<std::vector<int>>matrix)
{
	int rows = matrix.size();
	int cols = matrix[0].size();
	std::vector<std::vector<int>>arr(rows, std::vector<int>(cols));

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			arr[j][rows - 1 - i] = matrix[i][j];
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





void rotateMatrix90DegreeBetter(std::vector<std::vector<int>>arr)
{
	int n = arr.size();
	int cols = arr[0].size();

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			std::swap(arr[i][j], arr[j][i]);
		}
	}


	for(int i = 0; i < n; i++)
	{
		std::reverse(arr[i].begin(), arr[i].end());
	}


	for(int i = 0; i < n; i++)
	{
		for(int j = 0;  j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}
}







int main()
{	
	std::vector<std::vector<int>>matrix = {{1, 2, 3}, {4, 5, 6}, {001, 010, 011}};

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	rotateMatrix90Degree(matrix);
	std::cout << '\n';
	rotateMatrix90DegreeBetter(matrix);

	return 0;
}