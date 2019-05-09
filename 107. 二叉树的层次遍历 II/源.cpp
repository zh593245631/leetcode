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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> v;
		//存放节点
		queue<TreeNode*> node;
		//存放节点对应的层号
		queue<int> index;
		//先搞根节点
		if (root)
		{
			node.push(root);
			index.push(0);
		}
		while (!node.empty())
		{
			TreeNode* cur = node.front();
			node.pop();
			int curIndex = index.front();
			index.pop();
			v.resize(curIndex + 1);
			v[curIndex].push_back(cur->val);
			if (cur->left)
			{
				node.push(cur->left);
				index.push(curIndex + 1);
			}
			if (cur->right)
			{
				node.push(cur->right);
				index.push(curIndex + 1);
			}
		}
		reverse(v.begin(), v.end());
		return v;
	}
};