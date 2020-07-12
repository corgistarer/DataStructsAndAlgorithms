#include<vector>
#include<unordered_map>
using namespace std;

class TwoSum {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		// 暴力法
		// 时间复杂度: O(n^2); 
		// 空间复杂度: O(1)
		vector<int> index;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 1; j < nums.size(); j++) {
				if (target == nums[i] + nums[j]) {
					index.push_back(nums[i]);
					index.push_back(nums[j]);
					return index;
				}
				else {
					continue;
				}
			}
		}
		return index;
	}

	vector<int> twoSum2(vector<int>& nums, int target) {
		// 哈希法
		// 时间复杂度: O(nlogn); 
		//空间复杂度: O(n);
		//参考：https://leetcode-cn.com/problems/two-sum/solution/san-chong-fang-fa-bao-li-shuang-zhi-zhen-ha-xi-san/
		vector<int> index;
		unordered_map<int, int>hashmap;
		for (int i = 0; i < nums.size(); i++) 
		{
				if (hashmap[target-nums[i]] && hashmap[target-nums[i] != i+1])
				{
					index.push_back(i);
					index.push_back(hashmap[target - nums[i]]-1);
					return index;
				}
				hashmap[nums[i]] = i + 1;
		}

		return index;
	}
};
