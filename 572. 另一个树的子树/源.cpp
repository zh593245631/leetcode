/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (!p && !q)
			return true;
		if (!p || !q)
			return false;
		return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

	}
	bool isSubtree(TreeNode * s, TreeNode * t) {
		if (!s && !t)
			return true;
		if (s && t) {
			if (s->val == t->val && isSameTree(s, t))
				return true;
			if (isSubtree(s->left, t))
				return true;
			if (isSubtree(s->right, t))
				return true;
		}
		return false;
	}
};