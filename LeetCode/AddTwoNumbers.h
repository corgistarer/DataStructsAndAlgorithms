#include<iostream>
#include <vector>


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr ){}
};

class AddTwoNumbers{
public:
	 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		 ListNode *head = new ListNode(0);
		 ListNode *lastnode = head;
		 int cur = 0;
		 while (cur || l1 || l2) {
			 cur = cur + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
			 lastnode->next = new ListNode(cur % 10);
			 lastnode = lastnode->next;
			 cur = cur / 10;
			 l1 = l1 ? l1->next : nullptr;
			 l2 = l2 ? l2->next : nullptr;
		 }
		 ListNode *res = head->next;
		 delete head;
		 return res;
	}
};
