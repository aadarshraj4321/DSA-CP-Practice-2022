#include<bits/stdc++.h>


void replaceSpace(char *str)
{
	// find total spaces in str
	int spaces = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
			spaces++;
	}

	int index = strlen(str) + 2 * spaces;
	str[index] = '\0';

	for(int i = strlen(str) - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			str[index - 1] = '0';
			str[index - 2] = '2';
			str[index - 3] = '%';
			index -= 3;
		}

		else
		{
			str[index - 1] = str[i];
			index--;
		}
	}
}


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	char str[1000];
	std::cin.getline(str, 1000);
	replaceSpace(str);
	std::cout << str << '\n';


	return 0;
}