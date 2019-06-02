class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		unordered_map<int, int> m;
		for (const auto& e : A) {
			int ret = ++m[e];
			if (ret == 2)return e;
		}
		return 0;
	}
};