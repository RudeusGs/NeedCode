class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> se;
    for(int i = 0; i < nums.size(); ++i){
        if(se.count(nums[i])) return true;
        se.insert(nums[i]);
        if(se.size() > k){
            se.erase(nums[i - k]);
        }
    }
    return false;
}
};