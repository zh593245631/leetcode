
class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		map<string, int> str;
		for (const auto& e : words)
			++str[e];

		multimap<int, string, greater<int>> count;
		for (const auto& e : str)
			count.insert(make_pair(e.second, e.first));

		vector<string> ans;
		for (const auto& e : count) {
			if (k == 0)break;
			ans.push_back(e.second);
			--k;
		}
		return ans;

	}
};