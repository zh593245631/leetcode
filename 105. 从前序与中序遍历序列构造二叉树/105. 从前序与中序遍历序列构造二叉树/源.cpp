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
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		return Tree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
	}
	TreeNode* Tree(vector<int>& preorder, int leftpre, int rightpre, vector<int>& inorder, int leftin,
		int rightin)
	{
		if (leftpre > rightpre || leftin > rightin)return nullptr;

		TreeNode* root = new TreeNode(preorder[leftpre]);
		int rootin = leftin;
		while (rootin <= rightin && inorder[rootin] != preorder[leftpre]) ++rootin;
		int left = rootin - leftin;
		root->left = Tree(preorder, leftpre + 1, leftpre + left, inorder, leftin, rootin - 1);
		root->right = Tree(preorder, leftpre + left + 1, rightpre, inorder, rootin + 1, rightin);
		return root;

	}
};