class Solution {
public:
	ListNode* middleNode(ListNode* head) {


		ListNode* mid = head;
		ListNode* cur = mid->next;

		while (cur)
		{
			mid = mid->next;
			cur = cur->next;
			if (cur)
				cur = cur->next;
		}

		return mid;
	}
};