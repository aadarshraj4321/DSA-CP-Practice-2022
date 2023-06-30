#include<bits/stdc++.h>


void printPattern(int n)
{
	for(int i = n; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
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