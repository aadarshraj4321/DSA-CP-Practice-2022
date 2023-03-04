#include<bits/stdc++.h>

void static_calculator(int a, int b)
{
	printf("%d", a + b);
	printf("%d", a - b);
	printf("%d", a * b);
	printf("%d", a / b);
	printf("%d", a % b);
	std::cout << '\n';

	std::cout << "Addition : " << a + b << '\n';
	std::cout << "Subtraction : " << a - b << '\n';
	std::cout << "Multiplication : " << a * b << '\n';
	std::cout << "Division : " << a / b << '\n';
	std::cout << "Modulo : " << a % b << '\n';

}



int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	
	static_calculator(20, 30);

	return 0;
}