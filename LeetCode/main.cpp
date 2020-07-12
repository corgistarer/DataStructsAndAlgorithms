#include <iostream>
#include "TwoSum.h"


int main()
{
	vector<int> nums = { 2,5,7,11, 100, 200, 300};
	int target = 302;
	TwoSum twosum;
	vector<int> index = twosum.twoSum2(nums, target);
    std::cout << "TwoSum Test:\n";
	if (0 != index.size())
	{
		for (int i = 0; i < index.size(); i++)
		{
			std::cout << index[i] << " ";
		}
	}
	else 
	{
		std::cout <<" ";
	}
}
