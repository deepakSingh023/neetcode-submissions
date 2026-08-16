class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        stack<double> st;

        vector<pair<int,double>> ar;

        for(int i = 0 ; i<position.size()  ; i++ ){  

            double time = (double)(target - position[i])/speed[i];

            ar.push_back({position[i],time});
        }

        sort(ar.rbegin(),ar.rend());



        for(auto& car: ar){
            double time = car.second;

            if(st.empty() || st.top() < time){
                st.push(time);
            }
        }

        return st.size();


    }

        
};

  