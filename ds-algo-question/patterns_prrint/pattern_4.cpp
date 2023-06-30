#include<bits/stdc++.h>


void printPattern(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < n - i + 1; j++)
		{
			std::cout << "* ";
		}
		std::cout << '\n';
	}
}



void printPattern2(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n - i + 1; j++)
		{
			std::cout << j << " ";
		}
		std::cout << '\n';
	}
}


int main()
{	
	int n; std::cin >> n;
	printPattern2(n);

	return 0;
}