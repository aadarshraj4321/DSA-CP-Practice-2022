#include<bits/stdc++.h>

void printInc(int n)
{

	if(n == 0)
		return;

	std::cout << n << " ";
	printInc(n - 1);
}

void printDec(int n)
{
	if(n == 0)
		return;

	printDec(n - 1);
	std::cout << n << " ";
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	std::cin >> n;
	printInc(n);
	std::cout << '\n';
	printDec(n);

	return 0;
}