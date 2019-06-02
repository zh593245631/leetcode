class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_set<int> s;
		for (const auto& e : nums)
		{
			if (!s.insert(e).second)
				return true;
		}
		return false;
	}
};