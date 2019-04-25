struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
	
};
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == nullptr)
			return l2;
		if (l2 == nullptr)
			return l1;

		ListNode* ret = nullptr;
		if (l1->val < l2->val){
			ret = l1;
			l1 = l1->next;
		}
		else{
			ret = l2;
			l2 = l2->next;
		}

		ListNode* cur = ret;
		while (l1&&l2){
			if (l1->val < l2->val){
				cur->next = l1;
				l1 = l1->next;
			}
			else{
				cur->next = l2;
				l2 = l2->next;
			}
			cur = cur->next;
		}

		if (l1 == nullptr)
			cur->next = l2;
		else
			cur->next = l1;

		return ret;
	}
};