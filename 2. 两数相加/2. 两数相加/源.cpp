/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* ans = new ListNode(0);
		ListNode* cur = ans;
		int ret = 0;
		while (l1 && l2)
		{
			int tmp = l1->val + l2->val + ret;
			ListNode* p = new ListNode(tmp % 10);
			ret = tmp / 10;
			cur->next = p;
			cur = p;
			l1 = l1->next;
			l2 = l2->next;
		}

		if (l1)
		{
			while (l1)
			{
				ListNode* p = new ListNode((l1->val + ret) % 10);
				ret = (ret + l1->val) / 10;
				l1 = l1->next;
				cur->next = p;
				cur = p;
			}
		}

		if (l2)
		{
			while (l2)
			{
				ListNode* p = new ListNode((l2->val + ret) % 10);
				ret = (ret + l2->val) / 10;
				l2 = l2->next;
				cur->next = p;
				cur = p;
			}
		}

		if (ret)
		{
			ListNode* p = new ListNode(ret);
			cur->next = p;
			cur = p;
		}
		ans = ans->next;
		return ans;

	}
};