//
//#include<vector>
//#include<string>
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//	vector<string> uncommonFromSentences(string A, string B) {
//		A += ' ';
//		A += B;
//		unordered_map<string, int> map;
//		vector<string> ans;
//		int start = 0;
//		int last = 0;
//		do {
//			last = A.find(' ', start);
//			string word = A.substr(start, last - start);
//			++map[word];
//			start = last + 1;
//		} while (last != -1);
//
//		for (const auto& e : map)
//		{
//			if (e.second == 1) {
//				ans.push_back(e.first);
//			}
//		}
//		return ans;
//	}
//};
//
//int main()
//{
//	Solution sl;
//	string A, B;
//	getline(cin, A);
//	getline(cin, B);
//	sl.uncommonFromSentences(A, B);
//	return 0;
//}

#include<iostream>
#include<math.h>

using namespace std;

bool isS(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)return false;
	}
	return true;
}
int maxY(int n)
{
	for (int i = (int)sqrt(n); i > 1; --i)
	{
		if (n % i == 0)return i;
	}
	return -1;
}
int main()
{
	int N, M;
	cin >> N >> M;
	int cur = N;
	int count = 0;

	if (isS(N) || isS(M))cout << (-1) << endl;

	while (M > cur)
	{
		cur += maxY(cur);
		++count;
	}

	cout << count << endl;
	return 0;
}