class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> fre;

        for(int i = 0; i < s.size(); i++){
            fre[s[i]]++;
        }

        for(int j = 0 ; j< t.size(); j++){

            if(!fre[t[j]]){
                return false;
            }
            fre[t[j]]--;

            if(fre[j]<0){
                return false;
            }

        }

        return true;
        
    }
};
