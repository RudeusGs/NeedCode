class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> se;
        for(int num : nums){
            if(se.count(num)) return true;
            se.insert(num);
        }
        return false;
    }
};
