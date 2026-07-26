class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;  

        unordered_map<string,vector<string>> ch;

        for(int i = 0 ;i<strs.size(); i++ ){

            string sorted = strs[i];


            sort(sorted.begin(), sorted.end());
            ch[sorted].push_back(strs[i]);

        }

        for (auto &entry : ch) {
            ans.push_back(entry.second);
        }


        return ans;
        

    }
};
