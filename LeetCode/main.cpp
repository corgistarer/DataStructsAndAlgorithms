﻿#include <iostream>
#include "TwoSum.h"
#include "AddTwoNumbers.h"
#include "LongestSubstringWithoutRepeatingCharacters.h"
#include "MedianofTwoSortedArrays.h"

// No.4 寻找两个有序数组的中位数
void test_findMdianSortedArrays(vector<int> &num1, vector<int> &num2);

// No.3 无重复字符的最长子串的长度
void test_lengthOfLongestSubstring(string s);

// No.2 两数相加
ListNode* createListNode(vector<int> vals);
void freeListNode(ListNode* head);
void printListNode(ListNode* head);
void test_AddTwoNums(ListNode* l1, ListNode* l2);

// No.1 两数之和
void test_TwoSum(vector<int> &nums, int target);

int main()
{
	// No.4 寻找两个有序数组的中位数
	vector<int> nums1 = { 1,2,3,4,5,6,7,8,9};
	vector<int> nums2 = { 2,3,4,5,6 };
	test_findMdianSortedArrays(nums1, nums2);

	//// No.3 无重复字符的最长子串的长度
	//string str;
	//getline(cin, str);
	//test_lengthOfLongestSubstring(str);

	//// No.2 两数相加
	//auto list1 = createListNode({1 });
	//auto list2 = createListNode({ 9, 9});
	//printListNode(list1);
	//printListNode(list2);
	//test_AddTwoNums(list1, list2);
	//freeListNode(list1);
	//freeListNode(list2);

	//// No.1 两数之和
	//vector<int> nums = { 2,5,7,11, 100, 200, 300};
	//int target = 302;
	//test_TwoSum(nums, target);

	return 0;
}

// No.4 寻找两个有序数组的中位数
void test_findMdianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
	MedianofTwoSortedArrays motsa;
	double res = motsa.findMdianSortedArrays(nums1, nums2);
	cout << res;
}
// No.3 无重复字符的最长子串的长度
void test_lengthOfLongestSubstring(string s) {
	LongestSubstringWithoutRepeatingCharacters lswrc;
	int ans = lswrc.lengthOfLongestSubstring(s);
	cout << ans;
}

// No.2 两数相加
ListNode* createListNode(vector<int> vals)
{
	ListNode *res = nullptr;
	ListNode *last = nullptr;
	for (auto val : vals) {
		if (last) {
			last->next = new ListNode(val);
			last = last->next;
		}
		else {
			res = new ListNode(val);
			last = res;
		}
	}
	return res;
}

void freeListNode(ListNode* head)
{
	ListNode* node = head;
	while (node) {
		auto temp = node->next;
		delete node;
		node = temp;
	}
}

void printListNode(ListNode* head)
{
	ListNode* node = head;
	while (node) {
		std::cout << node->val << ", ";
		node = node->next;
	}
	std::cout << std::endl;
}

void test_AddTwoNums(ListNode* l1, ListNode* l2) {
	AddTwoNumbers addtwonums;
	auto result = addtwonums.addTwoNumbers(l1, l2);
	printListNode(result);
	freeListNode(result);
}

// No.1 两数之和
void test_TwoSum(vector<int> &nums, int target) {
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
		std::cout << " ";
	}
}
