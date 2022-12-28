#include<bits/stdc++.h>


int nextIndex(std::vector<int>arr, int i)
{
	return (i + arr[i] + arr.size()) % arr.size();
}



bool isCircularLoop(std::vector<int>arr)
{
	
	for(int i = 0; i < arr.size(); i++)
	{
		int slow = i;
		int fast = i;

		if(arr[i] == 0)
		{
			continue;
		}

		while(arr[slow] * arr[nextIndex(arr, slow)] > 0 && 
				arr[fast] * arr[nextIndex(arr, fast)] > 0 &&
				arr[fast] * arr[nextIndex(arr, nextIndex(arr, fast))] > 0)
		{
			slow = nextIndex(arr, slow);
			fast = nextIndex(arr, nextIndex(arr, fast));

			if(slow == fast)
			{
				if(slow == nextIndex(arr, slow)) 
				{
					break;
				}
				return true;
			}
		}
		slow = i;
		int val = arr[slow];
		while(val * arr[slow] > 0)
		{
			int x = arr[slow];
			slow = nextIndex(arr, slow);
			arr[x] = 0;
		}
	}
	return false;
}

int main()
{
	std::vector<int>arr;
	int n;
	std::cin >> n;
	while(n--)
	{
		int t;
		std::cin >> t;
		arr.push_back(t);
	}

	std::cout << isCircularLoop(arr) << '\n';
}