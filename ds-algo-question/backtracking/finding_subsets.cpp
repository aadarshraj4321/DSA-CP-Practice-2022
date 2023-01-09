#include<bits/stdc++.h>


void findSubsets(char *input, char *output, int i, int j)
{
	// Base Case
	if(input[i] == '\0')
	{
		output[j] = '\0';
		if(output[0] == '\0')
			std::cout << "NULL" << '\n';
		std::cout << output << '\n';
		return;
	}

	//Rec Case

	// Include the ith letter
	output[j] = input[i];
	findSubsets(input, output, i + 1, j + 1);

	// Exclude the ith letter mean not include the ith letter
	findSubsets(input, output, i + 1, j);
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	char input[1000];
	char output[1000];

	std::cin >> input;
	findSubsets(input, output, 0, 0);

	return 0;
}