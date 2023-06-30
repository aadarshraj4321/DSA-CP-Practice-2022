#include<bits/stdc++.h>



void printPattern(int n)
{
	for(int i = 0; i < (2 * n) - 1; i++)
	{
		int stars = i;
		if(i > n) stars = (2 * n) - i;
		for(int j = 0; j < stars; j++)
		{
			std::cout << "*";
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