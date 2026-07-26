class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> s;

        for(int i = 0 ; i< nums.size(); i++){

            int t = target - nums[i];

            if(s.contains(t)){
                return {s[t],i};
            }

            s.insert({nums[i], i});;
        }

        return {};
    }
};
