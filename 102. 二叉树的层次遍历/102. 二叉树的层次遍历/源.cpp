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
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ans;

		queue<TreeNode*> node; //节点进队
		queue<int> line;//同步节点 行进队

		if (root)
		{
			node.push(root);
			line.push(0);
		}

		while (!node.empty())
		{
			TreeNode* cur = node.front();
			node.pop();
			int ret = line.front();
			line.pop();

			ans.resize(ret + 1);
			ans[ret].push_back(cur->val);

			if (cur->left)
			{
				node.push(cur->left);
				line.push(ret + 1);
			}
			if (cur->right)
			{
				node.push(cur->right);
				line.push(ret + 1);
			}
		}

		return ans;

	}
};