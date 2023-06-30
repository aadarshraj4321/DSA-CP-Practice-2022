#include<bits/stdc++.h>



void printPattern(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
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
		for(int j = 1; j <= i; j++)
		{
			std::cout << j << " ";
		}
		std::cout << '\n';
	}
}



int main()
{
	int n; std::cin >> n;
	std::cout << '\n';
	
	printPattern(n);

	std::cout << '\n';

	printPattern2(n);

	return 0;
}