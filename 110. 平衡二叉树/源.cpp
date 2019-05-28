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
	bool isBalanced(TreeNode* root) {
		if (!root)
			return true;
		int ret = maxDepth(root->right) - maxDepth(root->left);
		if (ret<2 && ret>-2)
			return isBalanced(root->left) && isBalanced(root->right);
		return false;
	}

	int maxDepth(TreeNode * root) {
		if (root == nullptr)
			return 0;
		int max = maxDepth(root->left);
		int min = maxDepth(root->right);
		if (max < min)
		{
			int tmp = max;
			max = min;
			min = tmp;
		}
		return 1 + max;
	}
};