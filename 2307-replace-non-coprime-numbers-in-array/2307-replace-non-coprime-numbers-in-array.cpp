class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> st;
        for(int i : nums){
            while(!st.empty()){
                int a = gcd(st.back(), i);
                if (a == 1) break;
                i = lcm(st.back(), i);
                st.pop_back();
            }
            st.push_back(i);
        }
        return st;
    }
};