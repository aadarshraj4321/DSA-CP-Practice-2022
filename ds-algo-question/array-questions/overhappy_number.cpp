#include<bits/stdc++.h>


int findAllSquareOfDigit(int n)
{
	int totalSquare = 0;
	while(n > 0)
	{
		int rem = n % 10;
		totalSquare += rem * rem;
		n = n / 10;
	}
	return totalSquare;
}


bool thisIsHappyNumber(int n, std::map<int, bool>mp)
{
	if(n == 1)
	{
		return true;
	}

	if(mp.find(n) != mp.end())
	{
		return false;
	}

	mp.insert(std::make_pair(n, true));
	n = findAllSquareOfDigit(n);
	return thisIsHappyNumber(n, mp);
}


bool isOverHappyNumber(int n)
{
	std::map<int, bool>mp;
	return thisIsHappyNumber(n, mp);
}


int main()
{

	int t;
	std::cin >> t;
	while(t--)
	{
		int n;
		std::cin >> n;
		if(isOverHappyNumber(n)) std::cout << "True" << '\n';
		else std::cout << "False" << '\n';
	}


	return 0;
}