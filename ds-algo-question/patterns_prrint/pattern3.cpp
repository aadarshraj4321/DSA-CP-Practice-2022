#include<bits/stdc++.h>



void printPattern(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			std::cout << i << " ";
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