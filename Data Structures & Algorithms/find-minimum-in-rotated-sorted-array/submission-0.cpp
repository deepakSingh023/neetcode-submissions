class Solution {
public:
    int findMin(vector<int>& nums) {

        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {

            int m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                // Minimum must be on the right
                l = m + 1;
            } else {
                // Minimum is at m or on the left
                r = m;
            }
        }

        return nums[l];
    }
};
