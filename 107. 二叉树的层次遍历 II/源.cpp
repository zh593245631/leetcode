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
		//��Žڵ�
		queue<TreeNode*> node;
		//��Žڵ��Ӧ�Ĳ��
		queue<int> index;
		//�ȸ���ڵ�
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