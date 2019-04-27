#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int size = nums.size();
		if (size<2)
			return size;
		int cur = 0;
		for (int i = 1; i<size; i++)
		{
			if (nums[i] != nums[cur])
				nums[++cur] = nums[i];
		}
		return cur + 1;
	}
};
int main()
{
	Solution s;
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);

	cout << s.removeDuplicates(v) << endl;

	return 0;
}