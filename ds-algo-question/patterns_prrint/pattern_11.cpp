#include<bits/stdc++.h>





void printPattern(int n)
{
	for(int i = 0; i < n; i++)
	{
		for(char j = 'A'; j < 'A' + i; j++)
		{
			std::cout << j << " ";
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