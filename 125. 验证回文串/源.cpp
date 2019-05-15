class Solution {
public:
	bool isNumberOrLetter(char c)
	{
		return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	}
	bool isPalindrome(string s) {
		if (s.empty())
			return true;
		size_t left = 0;
		size_t right = s.size() - 1;

		while (left < right)
		{
			while (left != right)
			{
				if (isNumberOrLetter(s[left]))
					break;
				left++;
			}
			while (right != left)
			{
				if (isNumberOrLetter(s[right]))
					break;
				right--;
			}
			if (left < right)
			{
				if ((s[left] + 32 - 'a') % 32 != (s[right] + 32 - 'a') % 32)
					return false;
				left++;
				right--;
			}
		}
		return true;
	}
};