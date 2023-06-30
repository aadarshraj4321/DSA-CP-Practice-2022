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



int main()
{	
	int n; std::cin >> n;
	printPattern(n);

	return 0;
}