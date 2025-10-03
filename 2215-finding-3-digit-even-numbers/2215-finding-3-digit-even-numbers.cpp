class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            int d3 = digits[i];
            if(d3 % 2 != 0) continue;
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                int d1 = digits[j];
                if(d1 == 0) continue;
                for(int k = 0; k < n; k++){
                    if (k == i || k == j) continue;
                    int d2 = digits[k];
                    int num = d1 * 100 + d2 * 10 + d3;
                    st.insert(num);
                }
            }
        }
        vector<int> res(st.begin(), st.end());
        sort(res.begin(), res.end());
        return res;
    }
};
