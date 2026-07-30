class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map<int,int> s;

        for(int i = 0 ; i< numbers.size(); i++){

            int k = target - numbers[i];

            if(s.contains(k)){
                return {s[k]+1,i+1};
            }

            s.insert({numbers[i],i});
        }

        return {};
    }
};
