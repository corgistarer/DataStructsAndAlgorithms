#include<vector>
using namespace std;

class TwoSum {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
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
};
