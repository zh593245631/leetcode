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
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> s1, s2;
		vector<int> r;
		if (root == NULL)
			return r;
		s1.push(root);
		while (!s1.empty()){
			TreeNode* tmp = s1.top();
			s1.pop();
			s2.push(tmp);
			if (tmp->left != NULL)
				s1.push(tmp->left);
			if (tmp->right != NULL)
				s1.push(tmp->right);
		}
		while (!s2.empty()){
			TreeNode* tmp = s2.top();
			s2.pop();
			r.push_back(tmp->val);
		}
		return r;
	}
};