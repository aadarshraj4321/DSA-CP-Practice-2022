#include<bits/stdc++.h>


bool isOverLapRec(std::vector<int>rec1, std::vector<int>rec2)
{
	int x0 = rec1[0];
	int y0 = rec1[1];
	int x1 = rec1[2];
	int y1 = rec1[3];

	int a0 = rec2[0];
	int b0 = rec2[1];
	int a1 = rec2[2];
	int b1 = rec2[3];

	if(x1 <= a0 || y0 >= b1 || x0 >= a1 || b0 >= y1)
		return false;
	return true;
}



int main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	std::vector<int>rec1 = {0, 0, 2, 2};
	std::vector<int>rec2 = {1, 1, 3, 3};

	if(isOverLapRec(rec1, rec2)) std::cout << "True\n";
	else std::cout << "False\n";
}