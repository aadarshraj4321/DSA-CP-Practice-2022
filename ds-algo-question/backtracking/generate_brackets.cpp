#include<bits/stdc++.h>


void generateBrackets(std::string output, int n, int open, int close, int i)
{
	if(i == 2 * n)
	{
		std::cout << output << '\n';
		return;
	}

	if(open < n)
	{
		generateBrackets(output + '(', n, open + 1, close, i + 1);
	}

	if(close < open)
	{
		generateBrackets(output + ')', n, open, close + 1, i + 1);
	}
}

int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	std::string output;
	int n; std::cin >> n;
	generateBrackets(output, n, 0, 0, 0);

	return 0;
}