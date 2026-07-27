class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> sol;

        for(int i = 0 ; i< nums.size(); i++){

            int local=1;

            for(int j = 0 ; j < nums.size(); j++){
                if(i == j){
                    continue;
                }

                local *= nums[j];
            }

            sol.push_back(local);
        }

        return sol;

    }
};
