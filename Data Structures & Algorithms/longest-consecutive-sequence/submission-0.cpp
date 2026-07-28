class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty())
            return 0;

        sort(nums.begin(), nums.end());

        int sol = 1;
        int l = 0;
        int streak = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[l]) {
                continue;
            }

            if (nums[i] == nums[l] + 1) {
                streak++;
            } else {
                sol = max(sol, streak);
                streak = 1;
            }

            l = i;
        }

        return max(sol, streak);
    }
};
