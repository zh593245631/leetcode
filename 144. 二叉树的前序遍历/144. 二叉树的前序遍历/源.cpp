#include<iostream>
#include<stack>
#include<vector>

using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		if (!root) return{};
		vector<int> v;
		stack<TreeNode*> s;
		s.push(root);

		while (!s.empty())
		{
			while (s.top())
			{
				v.push_back(s.top()->val);
				s.push(s.top()->left);
			}
			s.pop();
			if (!s.empty())
			{
				TreeNode* p = s.top();
				s.pop();
				s.push(p->right);
			}
		}

		return v;

	}
};
