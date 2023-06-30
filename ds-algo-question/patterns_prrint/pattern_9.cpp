#include<bits/stdc++.h>


void printPattern(int n)
{
	int spaces = 2 * (n - 1);
	for(int i = 1; i < n; i++)
	{
		
		// print numbers
		for(int j = 1; j < i; j++)
		{
			std::cout << j;
		}

		// print spaces
		for(int j = 1; j < spaces; j++)
		{
			std::cout << " ";
		}


		// print numbers
		for(int j = i; j > 1; j--)
		{
			std::cout << j;
		}

		std::cout << '\n';
		spaces -= 2;
	}
}



int main()
{

	int n; std::cin >> n;
	printPattern(n);

	return 0;
}