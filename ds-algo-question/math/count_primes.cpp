#include<bits/stdc++.h>

// O(n^2) = O(n ** 2)
bool isPrime(int n)
{
	if(n <= 1)
	{
		return false;
	}

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}


// O(nlogn) = O(n ** logn)
bool isPrimeTwo(int n)
{
	if(n <= 1)
	{
		return false;
	}

	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}





// Sieve of Eratosthenes to solve this problem without getting TLE
const int num = 1e7+10;
std::vector<bool>isRealPrime(num, 1);
void isPrimeThree(int n)
{
	isRealPrime[0] = isRealPrime[1] = 0;
	for(int i = 2; i < n; i++)
	{
		if(isRealPrime[i] == true)
		{
			for(int j = i * 2; j < n; j += i)
			{
				isRealPrime[j] = false;
			}
		}
	}
}

int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int count = 0;
	int n;
	std::cin >> n;
	isPrimeThree(n);

	for(int i = 0; i < n; i++)
	{
		if(isRealPrime[i] == true)
			count++;
	}
	std::cout << count << '\n';

	return 0;
}
