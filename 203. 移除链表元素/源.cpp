#include<iostream>

using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		//È·¶¨Í·
		while (head && head->val == val)
		{
			head = head->next;
		}
		if (!head || (head->next == nullptr))return head;

		ListNode * cur = head;
		for (; cur&&cur->next != nullptr;)//1->2->6->3->4->5->6, val = 6
		{
			if (cur->next->val == val) {
				cur->next = cur->next->next;
				continue;
			}
			cur = cur->next;
		}

		return head;

	}
};

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		ListNode* prev = nullptr;
		ListNode* cur = head;

		while (cur)
		{
			if (cur->val == val) {
				if (cur == head) {
					head = cur->next;
				}
				else {
					prev->next = cur->next;
				}
			}
			else {
				prev = cur;
			}
			cur = cur->next;
		}

		return head;
	}
};
int main()
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->val = 1;
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->val = 2;
	ListNode* node1 = (ListNode*)malloc(sizeof(ListNode));
	node1->val = 2;
	ListNode* node2 = (ListNode*)malloc(sizeof(ListNode));
	node2->val = 1;
	ListNode* node3 = (ListNode*)malloc(sizeof(ListNode));
	node3->val = 4;
	ListNode* node4 = (ListNode*)malloc(sizeof(ListNode));
	node4->val = 5;
	ListNode* node5 = (ListNode*)malloc(sizeof(ListNode));
	node5->val = 6;

	head->next = node;
	node->next = node1;
	node1->next = node2;
	node2->next = nullptr;
	//node5->next = nullptr;

	//node3->next = node4;
	//nod1e4->next = node5;
	//node5->next = nullptr;

	Solution s;
	s.removeElements(head, 2);

	return 0;
}