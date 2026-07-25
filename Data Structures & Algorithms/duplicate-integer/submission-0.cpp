class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> sol;

        for(int i = 0 ; i< nums.size(); i++){

            if(sol.contains(nums[i])){
                return true;
            }

            sol.insert(nums[i]);

        }

        return false;
        
    }
};