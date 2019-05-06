using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };
 
class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q)
	{
			return true;
		if (!p || !q)
			return false;
		return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

	}
};