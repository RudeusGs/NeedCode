class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        vector<int> numKey;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key) numKey.push_back(i);
        }
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < numKey.size(); j++){
                if(k >= abs(i - numKey[j])) res.push_back(i);
            }
        }
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};