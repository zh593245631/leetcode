class Solution {
public:
	bool isPalindrome(int x) {
		if (x<0)
			return false;
		int a = x;
		int b = 0;

		while (a)
		{
			if (b>2147483647 / 10)//���Ļ�����2147447412
				return false;
			b = a % 10 + b * 10;  //x����
			a = a / 10;
		}

		if (x == b)
			return true;
		return false;
	}
};