class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> sol;

        priority_queue<pair<int,int>> pq;

        vector<int> ans;

        for(int i = 0; i< nums.size() ; i++){
            sol[nums[i]]++;
        }

        for(pair<const int, int> &val:sol){
            pq.push({val.second,val.first});
        }

        for(int i = 0 ; i < k; i++){
            pair<int,int> top = pq.top();
            ans.push_back(top.second);
            pq.pop();
        }

        return ans;
    }
};
