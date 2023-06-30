#include<bits/stdc++.h>



void printSquarePattern(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			std::cout << "* ";
		}
		std::cout << '\n';
	}
}




int main()
{
	int n; std::cin >> n;
	printSquarePattern(n);

	return 0;
}