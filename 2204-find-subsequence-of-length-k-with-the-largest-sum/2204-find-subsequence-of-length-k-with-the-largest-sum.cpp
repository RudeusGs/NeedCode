class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int,int>> pa;
        for(int i = 0; i < n; i++){
            pa.push_back({nums[i], i});
        }
        sort(pa.begin(), pa.end(), [](auto &a, auto &b){
            return a.first > b.first;
        });
        vector<pair<int,int>> v(pa.begin(), pa.begin() + k);
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });
        vector<int> res;
        for (auto &p : v) res.push_back(p.first);
        return res;
    }
};
 