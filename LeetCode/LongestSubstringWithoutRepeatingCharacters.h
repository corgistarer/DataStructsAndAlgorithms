#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class LongestSubstringWithoutRepeatingCharacters {
public:
	int lengthOfLongestSubstring(string s) {
		// ������
		vector<int> m(256, -1);
		int res = 0, left = -1;
		for (int i = 0; i < s.size(); i++) {
			left = max(left, m[s[i]]);
			m[s[i]] = i;
			res = max(res, i - left);
		}
		return res;
	}
};
