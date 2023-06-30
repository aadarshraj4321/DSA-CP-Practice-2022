#include<bits/stdc++.h>




void printPattern(int n)
{
	for(int i = 0; i < n; i++)
	{
		// spaces
		for(int j = 0; j < n - i - 1; j++)
		{
			std::cout << " ";
		}

		// starts
		for(int k = 0; k < 2 * i + 1; k++)
		{
			std::cout << "*";
		}

		// spaces
		for(int l = 0; l < n - i - 1; l++)
		{
			std::cout << " ";
		}
		std::cout << '\n';
	}



	for(int i = 0; i < n; i++)
	{

		// print spaces
		for(int j = 0; j < i; j++)
		{
			std::cout << " ";
		}

		// print stars
		for(int j = 0; j < 2 * n - (2 * i + 1); j++)
		{
			std::cout << "*";
		}

		// print spaces
		for(int j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		std::cout << '\n';
	}

}




int main()
{

	int n; std::cin >> n;
	printPattern(n);

	return 0;
}