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
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
		if (!headA || !headB)return nullptr;

		ListNode * pa = headA, *pb = headB;
		while (pa != pb)
		{
			if (!pa) {
				pa = headB;
			}
			else {
				pa = pa->next;
			}

			if (!pb) {
				pb = headA;
			}
			else {
				pb = pb->next;
			}
		}
		return pa;
	}
};