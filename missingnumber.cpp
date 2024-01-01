class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (nums[n - 1] != n)
            return n;
        for (auto i : nums) {
            if (nums[i] != i)
                return i;
        }

        return 0;
    }
};