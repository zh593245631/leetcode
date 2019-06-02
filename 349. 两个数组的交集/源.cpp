class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> s1;
		unordered_set<int> s2;
		vector<int> ans;

		for (const auto& e : nums1)
			s1.insert(e);

		for (const auto& e : nums2)
			s2.insert(e);

		for (const auto& e : s1)
		{
			if (!s2.insert(e).second)
				ans.push_back(e);
		}
		return ans;
	}
};