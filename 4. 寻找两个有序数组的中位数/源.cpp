class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		size_t len = nums1.size() + nums2.size();
		int ret = len / 2 + 1;
		int flag = len % 2;
		double ans = 0;
		int tmp = 0;
		int cur1 = 0;
		int cur2 = 0;
		int prev = 0;
		while (cur1 < nums1.size() && cur2 < nums2.size() && ret>0)
		{
			prev = tmp;
			if (nums1[cur1] < nums2[cur2]) {
				tmp = nums1[cur1];
				++cur1;
			}
			else
			{
				tmp = nums2[cur2];
				++cur2;
			}
			--ret;
		}

		if (ret > 0) {
			if (cur1 == nums1.size()) {
				while (ret--) {
					prev = tmp;
					tmp = nums2[cur2];
					++cur2;
				}
			}
			else {
				while (ret--) {
					prev = tmp;
					tmp = nums1[cur1];
					++cur1;
				}
			}
		}

		if (flag == 0) {
			ans = (prev + tmp) / 2.0;
		}
		else {
			ans = (double)tmp;
		}

		return ans;

	}
};