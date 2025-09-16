class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int cnt = 0;
        while(cnt < nums1.size()){
            int a = nums1[cnt];
            bool check = false;
            int next = -1;
            for(int i = 0; i < nums2.size(); i++){
                if(nums2[i] == a) {
                    check = true;
                }else if(check && nums2[i] > a){
                    next = nums2[i];
                    break;
                }
            }
            res.push_back(next);
            cnt++;
        }
        return res;
    }
};