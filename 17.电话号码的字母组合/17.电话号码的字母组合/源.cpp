#include<iostream>
#include<vector>
#include<string>
using namespace std;
string s[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
class Solution {
public:
	void Combinations(string& digits, size_t depth, const string& comStr,vector<string>& strVec)
	{
		if (digits.size() == depth)
		{
			strVec.push_back(comStr);
			return;
		}
		int mapNum = digits[depth] - '0';
		string letters = s[mapNum];
		for (auto& e : letters)
		{
			Combinations(digits, depth + 1, comStr + e, strVec);
		}
	}
	vector<string> letterCombinations(string digits) {
		vector<string> strVec;
		if (digits.empty())
		{
			return strVec;
		}
		string comStr;
		Combinations(digits, 0, comStr, strVec);
		return strVec;
	}
};

int main()
{

	Solution s;
	vector<string> result;
	result = s.letterCombinations("55");
	return 0;
}