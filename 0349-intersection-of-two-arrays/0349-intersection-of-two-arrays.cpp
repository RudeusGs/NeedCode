class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        for(auto i : nums2){
            s1.insert(i);
        }
        vector<int> result;
        set<int> se;
        for(int i : nums1){
            if(s1.count(i) && !se.count(i)){
                result.push_back(i);
                se.insert(i);
            }
        }
        return result;    
    }
};