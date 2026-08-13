class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int l = 1;
        int r = *max_element(piles.begin(),piles.end());

        while(l <= r){
            int speed = l + (r-l)/2;

            int hours = hoursNeeded(piles,speed);

            if(hours <= h){
                r = speed - 1;
            }else{
                l = speed +1;
            }
        }

        return l;
           
    }

    int hoursNeeded(vector<int> & piles , int speed){

        int hours = 0;

        for(int banana : piles){
            hours += ceil((double)banana/speed);
        }

        return hours;
    }
};
