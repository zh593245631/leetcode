class Solution {
public:
	vector<string> uncommonFromSentences(string A, string B) {
		A += ' ';
		A += B;
		unordered_map<string, int> map;
		vector<string> ans;
		int start = 0;
		int last = 0;
		do {
			last = A.find(' ', start);
			string word = A.substr(start, last - start);
			++map[word];
			start = last + 1;
		} while (last != -1);

		for (const auto& e : map)
		{
			if (e.second == 1) {
				ans.push_back(e.first);
			}
		}
		return ans;
	}
};