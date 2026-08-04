class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> sol(temperatures.size(), 0);

        for(int i =0 ; i< temperatures.size(); i++){

            while(!st.empty() && temperatures[i] > temperatures[st.top()]){

                int old = st.top();
                st.pop();
                sol[old] = i - old;
            }
            st.push(i);
        } 

        return sol;
    }
};
    