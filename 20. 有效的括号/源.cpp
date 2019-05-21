class Solution {
public:
	bool isValid(string s) {
		stack<char> q;

		auto vit = s.begin();
		while (vit != s.end())
		{
			if (*vit == '(') {
				q.push(')');
				++vit;
				continue;
			}

			if (*vit == '{') {
				q.push('}');
				++vit;
				continue;
			}

			if (*vit == '[') {
				q.push(']');
				++vit;
				continue;
			}

			if (!q.empty() && *vit == q.top()) {
				q.pop();
			}
			else {
				return false;
			}
			++vit;
		}
		if (q.empty())
			return true;
		return false;
	}
};