class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> a, b;
        for(auto i : nums){
            if(i % 2 == 0) a.push_back(i);
            else b.push_back(i);
        }
        int i = 0;
        int c = 0, d = 0;
        while(i < nums.size()){
            if(i % 2 == 0){
                res[i] = a[c++];
            }else{
                res[i] = b[d++];
            }
            i++;
        }
        return res;
    }
};