#include<bits/stdc++.h>


void towerOfHanoi(int n, char from, char helper, char to)
{
	if(n == 0) return;

	//std::cout << n << " " << from << " " << helper << " " << to << '\n';
	towerOfHanoi(n - 1, from, to, helper);
	// reached here
	// nth rod to to
	std::cout << from << "->" << to << '\n';

	towerOfHanoi(n - 1, helper, from, to);
}



int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	int n; std::cin >> n;
	towerOfHanoi(n, 'A', 'B', 'C');
	

	return 0;
}