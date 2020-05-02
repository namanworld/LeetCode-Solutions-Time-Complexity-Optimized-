class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
	while (start <= end) {
		int mid = (start + end) / 2;
		if (nums[mid] < target)
			start = mid + 1;
		else if (nums[mid] > target)
			end = mid - 1;
		else if (nums[mid] == target) {
			start = end = mid;
			while (start > 0 && nums[start - 1] == target)
				start--;
			while (end < nums.size() - 1 && nums[end + 1] == target)
				end++;
			return { start, end };
		}
	}
	return { -1, -1 };
    }
};
