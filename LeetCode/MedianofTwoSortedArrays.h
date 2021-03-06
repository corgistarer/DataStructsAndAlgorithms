#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class MedianofTwoSortedArrays {
public:
	double findMdianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int n = nums1.size();
		int m = nums2.size();
		if (n > m) {
			return findMdianSortedArrays(nums2, nums1);
		}

		int LMax1, LMax2, RMin1, RMin2, c1, c2, left = 0, right = 2 * n;

		while (left <= right) {
			c1 = (left + right) / 2;
			c2 = m + n - c1;

			LMax1 = (c1 == 0) ? INT_MIN : nums1[(c1 - 1) / 2];
			RMin1 = (c1 == 2 * n) ? INT_MAX : nums1[c1 / 2];
			LMax2 = (c2 == 0) ? INT_MIN : nums2[(c2 - 1) / 2];
			RMin2 = (c2 == 2 * m) ? INT_MAX : nums2[c2 / 2];

			if (LMax1 > RMin2) {
				right = c1 - 1;
			}
			else if (LMax2 > RMin1) {
				left = c1 + 1;
			}
			else {
				break;
			}
			return(max(LMax1, LMax2) + min(RMin1, RMin2)) / 2.0;
		}
	}
};