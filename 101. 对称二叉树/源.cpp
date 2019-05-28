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
	bool isSymmetric(TreeNode* root) {
		if (!root)
			return true;
		return isrSame(root->left, root->right);
	}

	bool isrSame(TreeNode* q, TreeNode* p)
	{
		if (!q && !p)
			return true;
		if (!q || !p)
			return false;
		if (q->val == p->val)
			return isrSame(q->left, p->right) && isrSame(q->right, p->left);

		return false;
	}
};