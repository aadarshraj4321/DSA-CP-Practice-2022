#include<bits/stdc++.h>


float powXY(float x, int y)
{
	if(y == 0)
		return 1;

	return x * powXY(x, y - 1);
}


int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	

		
	float x; std::cin >> x;
	int y; std::cin >> y;

	std::cout << std::fixed << std::setprecision(4) <<powXY(x , y) << '\n';

	return 0;
}