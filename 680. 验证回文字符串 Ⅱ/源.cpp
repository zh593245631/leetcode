class Solution {
public:
	bool _same(string& s, int left, int right)
	{
		while (left <= right)
		{
			if (s[left] == s[right]) {
				left++;
				right--;
			}
			else {
				return false;
			}
		}
		return true;
	}
	bool validPalindrome(string s) {
		int flag = 0;
		int left = 0;
		int right = s.size() - 1;

		if (_same(s, left, right))
			return true;
		while (left <= right)
		{
			if (s[left] == s[right]) {
				left++;
				right--;
			}
			else {

				if (_same(s, left, right - 1) || _same(s, left + 1, right)) {
					return true;
				}
				else {
					return false;
				}

			}
		}

		return true;
	}
};