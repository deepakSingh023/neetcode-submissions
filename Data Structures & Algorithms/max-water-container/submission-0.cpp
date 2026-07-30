class Solution {
public:
    int maxArea(vector<int>& heights) {

        int l = 0;
        int r = heights.size()-1;

        int sol = 0;

        while(l<r){

            int width = r - l;
            int vol = width * min(heights[l],heights[r]);

            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }

            sol = max(sol,vol);
        }

        return sol;

        
    }
};
