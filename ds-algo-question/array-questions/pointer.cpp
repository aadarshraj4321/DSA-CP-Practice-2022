#include<bits/stdc++.h>


int main()
{

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int a; std::cin >> a;
	int *p = &a;
	std::cout <<"Normal Variable " <<  a << '\n';
	std::cout << "Pointer Variable " << p << '\n';
	

	return 0;
}