/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//µÝ¹é
class Solution {
public:
	void inorder(TreeNode* root, vector<int>& v)
	{
		if (root == nullptr)
			return;
		inorder(root->left, v);
		v.push_back(root->val);
		inorder(root->right, v);
	}
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> v;
		inorder(root, v);

		return v;
	}
};
//·ÇµÝ¹é
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
	vector<int> inorderTraversal(TreeNode* root) {
		if (!root) return{};

		vector<int> ans;
		stack<TreeNode*> s;
		s.push(root);

		while (!s.empty())
		{
			while (s.top())
			{
				s.push(s.top()->left);
			}
			s.pop();
			if (!s.empty())
			{
				auto p = s.top();
				ans.push_back(p->val);
				s.pop();
				s.push(p->right);
			}
		}

		return ans;
	}
};