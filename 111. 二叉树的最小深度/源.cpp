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

	int minDepth(TreeNode* root) {
		if (!root)
			return 0;
		if (!root->left && !root->right)
			return 1;
		int min = minDepth(root->left);
		int max = minDepth(root->right);

		if (min == 0)
			min = max;
		if (min > max && max != 0)
		{
			min = max;
		}
		return 1 + min;
	}
};