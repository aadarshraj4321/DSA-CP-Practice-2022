#include<bits/stdc++.h>



void printPattern(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == 1 || i == n || j == 1 || j == n)
			{
				std::cout << "*";
			}
			else
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