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
	vector<double> averageOfLevels(TreeNode* root) {
		vector<double> ans;
		queue<TreeNode*> q;
		queue<int> line;

		if (root)
		{
			q.push(root);
			line.push(0);
		}

		long sum = 0;
		int count = 0;
		int high = 0;
		while (!q.empty())
		{
			TreeNode* cur = q.front();
			q.pop();

			if (high != line.front()) {
				double avg = sum / (double)count;
				ans.push_back(avg);
				sum = 0;
				count = 0;
			}
			sum += cur->val;
			count++;
			high = line.front();
			line.pop();

			if (cur->left)
			{
				q.push(cur->left);
				line.push(high + 1);
			}
			if (cur->right)
			{
				q.push(cur->right);
				line.push(high + 1);
			}

		}
		if (root)
			ans.push_back(sum / (double)count);
		return ans;

	}
};