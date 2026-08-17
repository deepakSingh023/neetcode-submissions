class TimeMap {
public:
    unordered_map<string,vector<pair<int , string>>> mp;


    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {

        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {

        if (!mp.contains(key)) {
            return "";
        }

        vector<pair<int,string>>& val= mp[key];


        int l = 0;
        int r = val.size()-1;

        string ans = "";

        while(l <=r){

            int m = l + (r - l)/2;

            if(val[m].first <= timestamp ){

                ans = val[m].second;
                l= m+1;

            }else{
                r = m-1;
            }
        }

        return ans;

        
    }
};
